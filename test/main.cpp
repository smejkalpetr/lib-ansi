//
//  main.cpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#include <iostream>
#include <thread>

#include "../include/libANSI.hpp"

#include "TerminalTests.hpp"
#include "CursorTests.hpp"
#include "TextTests.hpp"

/**
 * @brief The main class is only used to run test suites. This is also the showcase on how you should include the lib in your project - just with a simple
 * single include #include "libANSI.h" and then staticly link it in the Makefile (which you can check out in the provided Makefile).
 * 
 * @param argc 
 * @param argv
 * @return int 
 */
int main(int argc, const char * argv[]) {
    TerminalTests();
    CursorTests();
    TextTests();
    
    return 0;
}
