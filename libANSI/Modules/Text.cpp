//
//  Text.cpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#include "Text.hpp"

void Text::print(std::string text) {
    for (const auto & modifier: this->modifiers)
        std::cout << modifier;
    
    std::cout << text;
}

void Text::print(const char * text) {
    for (const auto & modifier: this->modifiers)
        std::cout << modifier;
    
    std::cout << text;
}

void Text::printOnPosition(int x, int y, std::string text) {
    for (const auto & modifier: this->modifiers)
        std::cout << modifier;
    
    // TODO: move cursor to desired position
    std::cout << text;
}

void Text::eraseCurrentLine() {
    
}

void Text::color(COLOR color) {
    
}

void Text::color(BRIGHT_COLOR color) {
    
}

void Text::color(int color_code) {
    
}

void Text::colorReset() {
    
}

void Text::backgroundColor(COLOR color) {
    
}

void Text::backgroundColor(BRIGHT_COLOR color) {
    
}

void Text::backgroundColor(int color_code) {
    
}

void Text::standard() {
    
}

void Text::bold() {
    
}

void Text::underline() {
    
}

void Text::blink() {
    
}

void Text::crossedOut() {
    
}

void Text::hide() {
    
}

void Text::show() {
    
}

void Text::reset() {
    this->modifiers.clear();
}
