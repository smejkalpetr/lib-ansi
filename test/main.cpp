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
    std::cout << "TERMINAL MODULE TESTING:" << std::endl;
    TerminalTests();
    
    std::cout << "CURSOR MODULE TESTING:" << std::endl;
    CursorTests();
    
    std::cout << "TEXT MODULE TESTING:" << std::endl;
    TextTests();
    
    return 0;
}
