//
//  Cursor.cpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#include "Cursor.hpp"

void libANSI::Cursor::moveToPosition(int x, int y) {
    std::string code =  "\033[" +
                        std::to_string(y) +
                        ";" +
                        std::to_string(x) +
                        "H";

    std::cout << code;
    std::cout.flush();
}

void libANSI::Cursor::moveToColumn(int x) {
    std::string code =  "\033[" +
                        std::to_string(x) +
                        "G";
    
    std::cout << code;
    std::cout.flush();
}

void libANSI::Cursor::moveUp() {
    std::cout << "\033[1A";
    std::cout.flush();
}

void libANSI::Cursor::moveDown() {
    std::cout << "\033[1B";
    std::cout.flush();
}

void libANSI::Cursor::moveRight() {
    std::cout << "\033[1C";
    std::cout.flush();
}

void libANSI::Cursor::moveLeft() {
    std::cout << "\033[1D";
    std::cout.flush();
}

void libANSI::Cursor::moveUpByX(int x) {
    std::string code =  "\033[" +
                        std::to_string(x) +
                        "A";
    std::cout << code;
    std::cout.flush();
}

void libANSI::Cursor::moveDownByX(int x) {
    std::string code =  "\033[" +
                        std::to_string(x) +
                        "B";
    std::cout << code;
    std::cout.flush();
}

void libANSI::Cursor::moveRightByX(int x) {
    std::string code =  "\033[" +
                        std::to_string(x) +
                        "C";
    std::cout << code;
    std::cout.flush();
}

void libANSI::Cursor::moveLeftByX(int x) {
    std::string code =  "\033[" +
                        std::to_string(x) +
                        "D";
    std::cout << code;
    std::cout.flush();
}

void libANSI::Cursor::savePosition() {
//    std::cout << "\033[s"; // on Linux/Win terminals
    std::cout << "\0337"; // on xTerm (MacOS terminal)
}

void libANSI::Cursor::restorePosition() {
//    std::cout << "\033[u"; // on Linux/Win terminals
    std::cout << "\0338"; // on xTerm (MacOS terminal)
}

void libANSI::Cursor::hide() {
    std::cout << "\033[?25l";
    std::cout.flush();
}

void libANSI::Cursor::show() {
    std::cout << "\033[?25h";
    std::cout.flush();
}

void libANSI::Cursor::reset() {
    this->show();
    this->moveToPosition(0, 0);
}
