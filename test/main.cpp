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

int main(int argc, const char * argv[]) {
//    libANSI::Terminal t;
//    t.cookedMode();

    
//    std::cout << "\033[3;3H";
//    std::cout << "\033[s";
//    std::cout << "Hello world";
//    std::cout << "\033[u";
//    std::cout << "Guten tag";
//    std::cout << std::endl;s
//    std::cout.flush();
    
//    for(;;){}
    
//    std::cout << "TERMINAL MODULE TESTING:" << std::endl;
//    TerminalTests();
    
    std::cout << "CURSOR MODULE TESTING:" << std::endl;
    CursorTests();
    
    std::cout << "TEXT MODULE TESTING:" << std::endl;
    TextTests();
    
    return 0;
}
