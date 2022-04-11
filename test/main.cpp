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
    libANSI::Terminal t;
    
    TerminalTests();
    CursorTests();
    TextTests();
    
    std::cout << "hello" << std::endl;
    
    return 0;
}
