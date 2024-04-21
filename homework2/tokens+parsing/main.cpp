#include <iostream>
#include <vector>
#include <variant>
#include <string>
#include <unordered_map>

//(1 + 2) * 3 / 4 + 5 * (6 - 7)
//1)токенизация
//2)парсер(построение дерева поиска)

struct OpeningBracketToken {
  friend std::ostream& operator << (std::ostream& os, const OpeningBracketToken&) {
    return os << "(";
  }
};

struct ClosingBracketToken {
  friend std::ostream& operator << (std::ostream& os, const ClosingBracketToken&) {
    return os << ")";
  }
};

struct NumberToken {
  int value;
  friend std::ostream& operator << (std::ostream& os, const NumberToken&) {
    return os << "Number";
  }
};

struct PlusToken {
  friend std::ostream& operator << (std::ostream& os, const PlusToken&) {
    return os << "+";
  }
};

struct MinusToken {
  friend std::ostream& operator << (std::ostream& os, const MinusToken&) {
    return os << "-";
  }
};

struct MultiplyToken {
  friend std::ostream& operator << (std::ostream& os, const MultiplyToken&) {
    return os << "*";
  }
};

struct ModuloToken {
  friend std::ostream& operator << (std::ostream& os, const ModuloToken&) {
    return os << "%";
  }
};

struct DivideToken {
  friend std::ostream& operator << (std::ostream& os, const DivideToken&) {
    return os << "/";
  }
};

struct CommaToken {
  friend std::ostream& operator << (std::ostream& os, const CommaToken&) {
    return os << ",";
  }
};

struct UnknownToken {
  std::string value;
  friend std::ostream& operator << (std::ostream& os, const UnknownToken&) {
    return os << "Unknown";
  }
};

struct MinToken {
  friend std::ostream& operator << (std::ostream& os, const MinToken&) {
    return os << "min";
  }
};

struct MaxToken {
  friend std::ostream& operator << (std::ostream& os, const MaxToken&) {
    return os << "max";
  }
};

struct SinToken {
  friend std::ostream& operator << (std::ostream& os, const SinToken&) {
    return os << "sin";
  }
};

struct CosToken {
  friend std::ostream& operator << (std::ostream& os, const CosToken&) {
    return os << "cos";
  }
};

struct TanToken {
  friend std::ostream& operator << (std::ostream& os, const TanToken&) {
    return os << "tan";
  }
};

struct AbsToken {
  friend std::ostream& operator << (std::ostream& os, const AbsToken&) {
    return os << "abs";
  }
};

struct SqrToken {
  friend std::ostream& operator << (std::ostream& os, const SqrToken&) {
    return os << "sqr";
  }
};

struct SqrtToken {
  friend std::ostream& operator << (std::ostream& os, const SqrtToken&) {
    return os << "sqrt";
  }
};

struct PowToken {
  friend std::ostream& operator << (std::ostream& os, const PowToken&) {
    return os << "pow";
  }
};

using Token = std::variant <OpeningBracketToken, ClosingBracketToken, NumberToken, PlusToken, MinusToken, MultiplyToken, ModuloToken, DivideToken, CommaToken,
  UnknownToken, MinToken, MaxToken, AbsToken, SqrToken, SqrtToken, SinToken, CosToken, TanToken, PowToken>;

std::ostream& operator << (std::ostream& os, const Token& token) {
  std::visit([&os](const auto& t) { os << t; }, token);
  return os;
}

const std::unordered_map <char, Token> kSymbolToToken{
  {'+', PlusToken{}},
  {'-', MinusToken{}},
  {'*', MultiplyToken{}},
  {'/', DivideToken{}},
  {'%', ModuloToken{}},
  {'(', OpeningBracketToken{}},
  {')', ClosingBracketToken{}},
  {',', CommaToken{}}
};

using Name = std::string;
const std::unordered_map <Name, Token> kFunctionToToken{
  {"max", MaxToken{}},
  {"min", MinToken{}},
  {"abs", AbsToken{}},
  {"sqr", SqrToken{}},
  {"sqrt", SqrtToken{}},
  {"sin", SinToken{}},
  {"cos", CosToken{}},
  {"tan", TanToken{}},
  {"pi", NumberToken{}},
  {"e", NumberToken{}},
  {"pow", PowToken{}}
};

int ToDigit(unsigned char symbol) {
  return symbol - '0';
}

NumberToken ParseNumber(const std::string& input, size_t& pos) {
  int value = 0;
  auto symbol = static_cast <unsigned char> (input[pos]);

  while (std::isdigit(symbol)) {
    value = value * 10 + ToDigit(symbol);
    if (pos == input.size() - 1) {
      ++pos;
      break;
    }

    symbol = static_cast <unsigned char> (input[++pos]);
  }

  return NumberToken{ value };
}

Token ParseFunctionName(const std::string& input, size_t& pos) {
  std::string functionName;
  auto symbol = static_cast <unsigned char> (input[pos]);
  while (std::isalpha(symbol)) {
    if (pos == input.size() - 1) {
      ++pos;
      break;
    }

    functionName += symbol;
    symbol = static_cast <unsigned char> (input[++pos]);
  }

  if (kFunctionToToken.find(functionName) != kFunctionToToken.end()) {
    return kFunctionToToken.at(functionName);
  }

  return UnknownToken{ functionName };
}

std::vector <Token> Tokenize(const std::string& input) {
  std::vector <Token> tokens;
  const size_t size = input.size();
  size_t pos = 0;
  while (pos < size) {
    const auto symbol = static_cast <unsigned char> (input[pos]);
    if (std::isspace(symbol)) {
      ++pos;
    }
    else {
      if (std::isdigit(symbol)) {
        tokens.emplace_back(ParseNumber(input, pos));
      }
      else {
        if (std::isalpha(symbol)) {
          tokens.emplace_back(ParseFunctionName(input, pos));
        }
        else {
          auto it = kSymbolToToken.find(symbol);
          if (it != kSymbolToToken.end()) {
            tokens.emplace_back(it->second);
            ++pos;
          }
          else {
            tokens.emplace_back(UnknownToken{ std::to_string(symbol) });
            ++pos;
          }
        }
      }
    }
  }
  return tokens;
}

int main() {
  std::vector <std::string> requests = { "14 - 1", "(1 + 2) * 3 / 4 + 5 * (6 - 7)", "abs(-100) + 4343 - (2) * (33 - 444)", "6 / 33 + sqrt(49) - abs(99)", "1 - sqr(5 * 12) + 3434 / (abs(-500))",
  "min(sqr(33 * 333)", "max(22, abs(-9)))))", "sqrt(5 * 6)", "5 + 77", "max(1, 2, 3, 4, 5, 6) .", "sin(100) + cos(200) + tan(300)", "e + pi - 16", "pow(15) rjrj" };

  std::vector <Token> tokens;
  int requestCounter = 0;
  for (auto& request : requests) {
    tokens = Tokenize(request);
    ++requestCounter;
    std::cout << "request#" << requestCounter << ": " << request << " | after tokenization: ";
    for (const auto& token : tokens) {
      std::cout << token;
    }
    std::cout << "\n\n";
    tokens.clear();
  }

  return 0;
}