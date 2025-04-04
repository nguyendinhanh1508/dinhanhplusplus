#ifndef VALUES_H
#define VALUES_H
#include <iostream>
#include <vector>
#include <cctype>
#include <unordered_map>
#include <unordered_set>

enum TokenType {
    INTEGER, CHAR, LIST, STRING, BOOLEAN, FUNCTION, INDEX,
    FUNCTION_CALL, RETURN,
    INTEGER_IDENTIFIER, CHAR_IDENTIFIER,
    LIST_IDENTIFIER, STRING_IDENTIFIER, BOOLEAN_IDENTIFIER,
    FUNCTION_IDENTIFIER,
    PLUS, MINUS, MULTIPLY, DIVIDE,
    ASSIGN, IDENTIFIER,
    OUTPUT, INPUT, GETLINE,
    NEW_VAR,
    COMMA,
    LEFT_PARENTHESIS, RIGHT_PARENTHESIS,
    CURLY_LEFT, CURLY_RIGHT,
    GET_VALUE, INDEX_END,
    MORE, MORE_EQUAL, LESS, LESS_EQUAL, EQUAL, NOT_EQUAL,
    END, NONE
};

struct list_element {
    int type;
    int integer;
    char character;
    std::vector<list_element> list;
};

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
    std::string name;
};

struct AST_NODE {
    Token token;
    AST_NODE* left;
    AST_NODE* right;
    std::vector<AST_NODE*> children;
};

#endif
