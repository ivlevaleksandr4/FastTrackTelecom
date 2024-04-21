#include <iostream>
#include <vector>
#include <variant>
#include <string>
#include <unordered_map>

//(1 + 2) * 3 / 4 + 5 * (6 - 7)
//1)токенизация
//2)парсер(построение дерева поиска)

struct OpeningBracket {
  friend std::ostream& operator << (std::ostream& os, const OpeningBracket&) {
    return os << "(";
  }
};

struct ClosingBracket {
  friend std::ostream& operator << (std::ostream& os, const ClosingBracket&) {
    return os << ")";
  }
};

struct Number {
  int vaue;
  friend std::ostream& operator << (std::ostream& os, const Number&) {
    return os << "Number";
  }
};

struct Plus {
  friend std::ostream& operator << (std::ostream& os, const Plus&) {
    return os << "+";
  }
};

struct Minus {
  friend std::ostream& operator << (std::ostream& os, const Minus&) {
    return os << "-";
  }
};

struct Multiply {
  friend std::ostream& operator << (std::ostream& os, const Multiply&) {
    return os << "*";
  }
};

struct Modulo {
  friend std::ostream& operator << (std::ostream& os, const Modulo&) {
    return os << "%";
  }
};

struct Divide {
  friend std::ostream& operator << (std::ostream& os, const Divide&) {
    return os << "/";
  }
};

struct Comma {
  friend std::ostream& operator << (std::ostream& os, const Comma&) {
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

using Token = std::variant <OpeningBracket, ClosingBracket, Number, Plus, Minus, Multiply, Modulo, Divide, Comma,
  UnknownToken, MinToken, MaxToken, AbsToken, SqrToken, SqrtToken>;

std::ostream& operator << (std::ostream& os, const Token& token) {
  std::visit([&os](const auto& t) { os << t; }, token);
  return os;
}

const std::unordered_map <char, Token> kSymbolToToken{
  {'+', Plus{}},
  {'-', Minus{}},
  {'*', Multiply{}},
  {'/', Divide{}},
  {'%', Modulo{}},
  {'(', OpeningBracket{}},
  {')', ClosingBracket{}},
  {',', Comma{}}
};

using Name = std::string;
const std::unordered_map <Name, Token> kFunctionToToken{
  {"max", MaxToken{}},
  {"min", MinToken{}},
  {"abs", AbsToken{}},
  {"sqr", SqrToken{}},
  {"sqrt", SqrtToken{}}
};

int ToDigit(unsigned char symbol) {
  return symbol - '0';
}

Number ParseNumber(const std::string& input, size_t& pos) {
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

  return Number{ value };
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
  std::vector <std::string> requests = { "14 - 1", "(1 + 2) * 3 / 4 + 5 * (6 - 7)", "abs(-100) + 4343 - (2) * (33 - 444)", "6 / 33 +sqrt(49) - abs(99)", "1 - sqr(2 * 3) + 4 / (abs(-5))",
  "min(sqr(33 * 333)", "max(22, abs(-9)))))", "sqrt(5 * 6)", "5 + 77", "max(1, 2, 3, 4, 5, 6) ." };

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