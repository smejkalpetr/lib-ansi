//
//  Cursor.cpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#include "Cursor.hpp"

void libANSI::Cursor::moveToPosition(int x, int y) {
    std::string code =  "\u001b[" +
                        std::to_string(y) +
                        ";" +
                        std::to_string(x) +
                        "H";
    
    std::cout << code;
}

void libANSI::Cursor::moveToColumn(int x) {
    std::string code =  "\u001b[" +
                        std::to_string(x) +
                        "G";
    
    std::cout << code;
}

void libANSI::Cursor::moveUp() {
    std::cout << "\u001b[1A";
}

void libANSI::Cursor::moveDown() {
    std::cout << "\u001b[1B";
}

void libANSI::Cursor::moveRight() {
    std::cout << "\u001b[1C";
}

void libANSI::Cursor::moveLeft() {
    std::cout << "\u001b[1D";
}

void libANSI::Cursor::moveUpByX(int x) {
    std::string code =  "\033[" +
                        std::to_string(x) +
                        "A";
    std::cout << code;
}

void libANSI::Cursor::moveDownByX(int x) {
    std::string code =  "\033[" +
                        std::to_string(x) +
                        "B";
    std::cout << code;
}

void libANSI::Cursor::moveRightByX(int x) {
    std::string code =  "\033[" +
                        std::to_string(x) +
                        "C";
    std::cout << code;
}

void libANSI::Cursor::moveLeftByX(int x) {
    std::string code =  "\033[" +
                        std::to_string(x) +
                        "D";
    std::cout << code;
}

void libANSI::Cursor::savePosition() {
    std::cout << "\033[s";
}

void libANSI::Cursor::restorePosition() {
    std::cout << "\033[u";
}

void libANSI::Cursor::hide() {
    std::cout << "\033[?25l";
}

void libANSI::Cursor::show() {
    std::cout << "\033[?25h";
}

void libANSI::Cursor::reset() {
    
}
