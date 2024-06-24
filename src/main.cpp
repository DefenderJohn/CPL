#include <iostream>
#include "Lexer/Lexer.h"
#include "Parser/Parser.h"
#include "SemanticAnalyser/SemanticAnalyser.h"
#include "IRGenerator/IRGenerator.h"

int main() {
    std::cout << "CPL编译器，启动！" << std::endl;
    lexicalAnalysis();
    generateAST();
    semannticAnalysis();
    generateIR();
    return 0;
}
