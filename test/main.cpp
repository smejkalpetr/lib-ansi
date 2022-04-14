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
//    TerminalTests();
//    CursorTests();
    TextTests();
    
    return 0;
}
