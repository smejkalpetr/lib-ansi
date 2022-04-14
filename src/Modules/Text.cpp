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
    std::cout.flush();
    this->resetAfterPrint();
}

void libANSI::Text::print(const char * text) {
    for (const auto & modifier: this->modifiers)
        std::cout << modifier;
    
    std::cout << text;
    std::cout.flush();
    this->resetAfterPrint();
}

void libANSI::Text::printOnPosition(int x, int y, std::string text) {
    libANSI::Cursor c;
    c.moveToPosition(x, y);
    
    for (const auto & modifier: this->modifiers)
        std::cout << modifier;
    
    std::cout << text;
    std::cout.flush();
    this->resetAfterPrint();
}

void libANSI::Text::clearLine() {
    std::cout << "\u001b[2K";
}

void libANSI::Text::clearLineToBeggining() {
    std::cout << "\u001b[1K";
}

void libANSI::Text::clearLineToEnd() {
    std::cout << "\u001b[0K";
}

void libANSI::Text::color(COLOR color) {
    std::string code =  "\033[" +
                        std::to_string(color) +
                        "m";
    
    this->modifiers.push_back(code);
}

void libANSI::Text::brightColor(COLOR bright_color) {
    std::string code =  "\033[" +
                        std::to_string(bright_color) +
                        ";1m";
    
    this->modifiers.push_back(code);
}

void libANSI::Text::color(int color_code) {
    std::string code =  "\033[38;5;" +
                        std::to_string(color_code) +
                        "m";
    
    this->modifiers.push_back(code);
}

void libANSI::Text::colorReset() {
    std::string code =  "\033[" +
                        std::to_string(COLOR::DEFAULT) +
                        "m";
    
    this->modifiers.push_back(code);
}

void libANSI::Text::backgroundColor(COLOR color) {
    std::string code =  "\033[" +
                        std::to_string(color) +
                        "m";
    
    this->modifiers.push_back(code);
}

void libANSI::Text::backgroundBrightColor(COLOR bright_color) {
    std::string code =  "\033[" +
                        std::to_string(bright_color) +
                        ";1m";
    
    this->modifiers.push_back(code);
}

void libANSI::Text::backgroundColor(int color_code) {
    std::string code =  "\033[38;5;" +
                        std::to_string(color_code) +
                        "m";
    
    this->modifiers.push_back(code);
}

void libANSI::Text::backgroundColorReset() {
    std::string code =  "\033[" +
                        std::to_string(COLOR::DEFAULT) +
                        "m";
    
    this->modifiers.push_back(code);
}

void libANSI::Text::standard() {
    this->modifiers.push_back("\033[22m");
}

void libANSI::Text::bold(bool is_turned_on) {
    if (is_turned_on)
        this->modifiers.push_back("\033[1m");
    else
        this->modifiers.push_back("\033[0m");
}

void libANSI::Text::underline(bool is_turned_on) {
    if (is_turned_on)
        this->modifiers.push_back("\033[4m");
    else
        this->modifiers.push_back("\033[24m");
}

void libANSI::Text::blink(bool is_turned_on) {
    if (is_turned_on)
        this->modifiers.push_back("\033[5m");
    else
        this->modifiers.push_back("\033[25m");
}

void libANSI::Text::crossedOut(bool is_turned_on) {
//    MAY NOT WORK FOR SOME TERMINALS:
    if (is_turned_on)
        this->modifiers.push_back("\033[9m");
    else
        this->modifiers.push_back("\033[29m");
}

void libANSI::Text::reversedColors(bool is_turned_on) {
    if (is_turned_on)
        this->modifiers.push_back("\033[7m");
    else
        this->modifiers.push_back("\033[27m");
}

void libANSI::Text::hide() {
    this->modifiers.push_back("\033[8m");
}

void libANSI::Text::show() {
    this->modifiers.push_back("\033[28m");
}

void libANSI::Text::reset() {
    this->modifiers.clear();
    std::cout << "\033[0m";
}

void libANSI::Text::resetAfterPrint() {
    std::cout << "\033[0m";
}
