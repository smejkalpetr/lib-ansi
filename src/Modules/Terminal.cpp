//
//  Terminal.cpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#include "Terminal.hpp"

void libANSI::Terminal::rawMode() {
    std::system("stty raw");
}

void libANSI::Terminal::cookedMode() {
    system("stty cooked");
}

void libANSI::Terminal::resize(int w, int h) {
    std::string code =  std::string("\e[8;") +
                        std::to_string(h) +
                        std::string(";") +
                        std::to_string(w) +
                        std::string("t");
    
    std::cout << code;
}

void libANSI::Terminal::minimize() {
    std::cout << "\e[2t";
}

void libANSI::Terminal::maximize() {
    std::cout << "\e[1t";
}
        
void libANSI::Terminal::clearScreen() {
    std::cout << "\u001b[2J";
}

void libANSI::Terminal::clearScreenToBeggining() {
    std::cout << "\u001b[1J";
}

void libANSI::Terminal::clearScreenToEnd() {
    std::cout << "\u001b[0J";
}

void libANSI::Terminal::backgroundColor(COLOR color) {
    std::string code =  "\033[" +
                        std::to_string(color + 10) +
                        "m";
    
    std::cout << code;
    
    this->clearScreen();
}

void libANSI::Terminal::backgroundColor(BRIGHT_COLOR color) {
    std::string code =  "\033[" +
                        std::to_string(color + 10) +
                        ";1m";
    
    std::cout << code;
    this->clearScreen();
}

void libANSI::Terminal::backgroundColor(int color_code) {
    std::string code =  "u001b[38;5;" +
                        std::to_string(color_code) +
                        "m";
    
    std::cout << code;
    this->clearScreen();
}

void libANSI::Terminal::reset() {
    std::cout << "\u001b[0m";
}
