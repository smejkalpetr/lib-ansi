//
//  Terminal.cpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#include "Terminal.hpp"

void Terminal::rawMode() {
    std::system("stty raw");
}

void Terminal::cookedMode() {
    system("stty cooked");
}

void Terminal::resize(int w, int h) {
    std::string code =  std::string("\e[8;") +
                        std::to_string(h) +
                        std::string(";") +
                        std::to_string(w) +
                        std::string("t");
    
    std::cout << code;
}

void Terminal::clearLine() {
    
}

void Terminal::clearLineToBeggining() {
    
}

void Terminal::clearLineToEnd() {
    
}

void Terminal::backgroundColor(COLOR color) {
    
}

void Terminal::backgroundColor(BRIGHT_COLOR color) {
    
}

void Terminal::backgroundColor(int color_code) {
    
}

void Terminal::reset() {
    
}
