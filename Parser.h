#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include "structs/Token.h"
#include "structs/ASTNode.h"

using namespace std;


class Parser
{
public:
    explicit Parser(const vector<Token> &tokens) : tokens(tokens), currentIndex(0) {}

    ASTNode parse();

private:
    vector<Token> tokens;
    size_t currentIndex;

    Token peek();

    Token consume(const string &expectedType);

    ASTNode parseExpresseion();

    ASTNode parseAssignment();

    ASTNode parsePrintStatement();

    ASTNode parseStatement();
};

#endif