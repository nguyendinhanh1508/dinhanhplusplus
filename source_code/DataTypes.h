#ifndef DATATYPES_H
#define DATATYPES_H
#include <iostream>
#include <vector>
#include <cctype>
#include <unordered_map>
#include <unordered_set>

enum TokenType {
    INTEGER, CHAR, LIST, INDEX,
    INTEGER_IDENTIFIER, CHAR_IDENTIFIER, LIST_IDENTIFIER,
    PLUS, MINUS, MULTIPLY, DIVIDE,
    ASSIGN, IDENTIFIER,
    OUTPUT, INPUT,
    NEW_VAR,
    LEFT_PARENTHESIS, RIGHT_PARENTHESIS,
    MORE, MORE_EQUAL, LESS, LESS_EQUAL, EQUAL,
    END, NONE
};

struct list_element {
    int integer;
    char character;
};

std::unordered_map<std::string, int> variables_integer;
std::unordered_map<std::string, char> variables_char;
std::unordered_map<std::string, std::vector<list_element>> variables_list;
std::unordered_map<std::string, TokenType> variables_type;
std::unordered_set<std::string> already_declared;

struct Token {
    TokenType type;
    char character;
    int integer;
    std::vector<list_element> list;
    std::string name;
};

struct EvaluateValue {
    TokenType type;
    char character;
    int integer;
    std::vector<list_element> list;
};

struct AST_NODE {
    Token token;
    AST_NODE* left;
    AST_NODE* right;
};
#endif
