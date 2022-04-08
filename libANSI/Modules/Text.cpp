//
//  Text.cpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#include "Text.hpp"

void libANSI::Text::print(std::string text) {
    for (const auto & modifier: this->modifiers)
        std::cout << modifier;
    
    std::cout << text;
}

void libANSI::Text::print(const char * text) {
    for (const auto & modifier: this->modifiers)
        std::cout << modifier;
    
    std::cout << text;
}

void libANSI::Text::printOnPosition(int x, int y, std::string text) {
    for (const auto & modifier: this->modifiers)
        std::cout << modifier;
    
    // TODO: move cursor to desired position
    std::cout << text;
}

void libANSI::Text::clearLine() {
    
}

void libANSI::Text::clearLineToBeggining() {
    
}

void libANSI::Text::clearLineToEnd() {
    
}

void libANSI::Text::color(COLOR color) {
    
}

void libANSI::Text::color(BRIGHT_COLOR color) {
    
}

void libANSI::Text::color(int color_code) {
    
}

void libANSI::Text::colorReset() {
    
}

void libANSI::Text::backgroundColor(COLOR color) {
    
}

void libANSI::Text::backgroundColor(BRIGHT_COLOR color) {
    
}

void libANSI::Text::backgroundColor(int color_code) {
    
}

void libANSI::Text::standard() {
    
}

void libANSI::Text::bold() {
    
}

void libANSI::Text::underline() {
    
}

void libANSI::Text::blink() {
    
}

void libANSI::Text::crossedOut() {
    
}

void libANSI::Text::hide() {
    
}

void libANSI::Text::show() {
    
}

void libANSI::Text::reset() {
    this->modifiers.clear();
}
