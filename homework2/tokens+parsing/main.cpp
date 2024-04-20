#include <iostream>
#include <vector>
#include <memory>
#include <array>
#include <variant>
#include <unordered_map>

// (1 + 2) * 3 / 4 + 5 * (6 - 7)

// 1. Токенизация
// 2. Парсер (построение дерева разбора выражения)

// +, -, *, /, %

struct TokenStruct {
  std::string entity;
};

struct OpeningBracket : TokenStruct {};

struct ClosingBracket : TokenStruct {};

struct Number : TokenStruct {
  int value;
};

struct UnknownToken : TokenStruct {
};

struct MinToken {};

struct MaxToken {};

struct AbsToken {};

struct Plus {};

struct Minus {};

struct Multiply {};

struct Modulo {};

struct Divide {};

struct SqrToken {};

struct Name {
  std::string name;
};

using Token = std::variant <OpeningBracket, ClosingBracket, Number, UnknownToken, MinToken, MaxToken, AbsToken, Plus, Minus, Multiply, Modulo, Divide, Name, SqrToken>;

const std::unordered_map <char, Token> kSymbolToToken{ {'+', Plus{}}, {'-', Minus{}}, {'*', Multiply{}}, {'/', Divide{}}, {'%', Modulo{}}, {'(', OpeningBracket{}}, {')', ClosingBracket{}}, };
const std::unordered_map <std::string, Token> kNameToToken{ {"max", MaxToken{}}, {"min", MinToken{}} , {"sqr", SqrToken{} }, {"|", AbsToken{} } };

int ToDigit(unsigned char symbol) {
  return symbol - '0';
}

Number ParseNumber(const std::string& input, size_t& pos) {
  int value = 0;
  auto symbol = static_cast <unsigned char> (input[pos]);
  while (std::isdigit(symbol)) {
    value = value * 10 + ToDigit(symbol);
    if (pos == input.size() - 1) {
      break;
    }
    symbol = static_cast <unsigned char> (input[++pos]);
  }
  return Number{ entity };
}

Name ParseName(const std::string& input, size_t& pos) {
  std::string name;
  auto symbol = static_cast <unsigned char> (input[pos]);
  while (std::isalpha(symbol)) {
    name += symbol;
    if (pos == input.size() - 1) {
      break;
    }
    symbol = static_cast <unsigned char> (input[++pos]);
  }

  auto it = kNameToToken.find(name);
  if (it != kNameToToken.end()) {
    return Name{ it->first };
  }

  return Name{ name };
}

std::vector <Token> Tokenize(const std::string& input) {
  std::vector <Token> tokens;
  const size_t size = input.size();
  size_t pos = 0;
  while (pos < size) {
    const auto symbol = static_cast<unsigned char>(input[pos]);
    if (std::isspace(symbol)) {
      ++pos;
    }
    else if (std::isdigit(symbol)) {
      tokens.emplace_back(ParseNumber(input, pos));
    }
    else if (auto it = kSymbolToToken.find(symbol); it != kSymbolToToken.end()) {
      tokens.emplace_back(it->second);
    }
    else if (std::isalpha(symbol)) {
      tokens.emplace_back(ParseName(input, pos));
    }
  }
  return tokens;
}

int main() {
  std::string input = "max sqr";
  std::vector <Token> tokens = Tokenize(input);
  OpeningBracket.entity = "(";

  for (const auto& token : tokens) {
  }

  return 0;
}