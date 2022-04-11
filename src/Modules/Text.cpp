//
//  Text.cpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#include "Text.hpp"

void libANSI::Text::print(std::string text) {
    std::cout << text;
    std::cout.flush();
}

void libANSI::Text::print(const char * text) {
    std::cout << text;
    std::cout.flush();
}

void libANSI::Text::printOnPosition(int x, int y, std::string text) {
    libANSI::Cursor c;
    c.moveToPosition(x, y);
    
    std::cout << text;
    std::cout.flush();
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
    std::cout << code;
}

void libANSI::Text::brightColor(COLOR bright_color) {
    std::string code =  "\033[" +
                        std::to_string(bright_color) +
                        ";1m";
    std::cout << code;
}

void libANSI::Text::color(int color_code) {
    std::string code =  "\033[38;5;" +
                        std::to_string(color_code) +
                        "m";
    std::cout << code;
}

void libANSI::Text::colorReset() {
    std::cout << COLOR::DEFAULT;
}

void libANSI::Text::backgroundColor(COLOR color) {
    std::string code =  "\033[" +
                        std::to_string(color) +
                        "m";
    std::cout << code;
}

void libANSI::Text::backgroundBrightColor(COLOR bright_color) {
    std::string code =  "\033[" +
                        std::to_string(bright_color) +
                        ";1m";
    std::cout << code;
}

void libANSI::Text::backgroundColor(int color_code) {
    std::string code =  "\033[38;5;" +
                        std::to_string(color_code) +
                        "m";
    std::cout << code;
}

void libANSI::Text::standard() {
    std::cout << "\033[22m";
}

void libANSI::Text::bold(bool is_turned_on) {
    if (is_turned_on)
        std::cout << "\033[1m";
    else
        std::cout << "\033[0m";
}

void libANSI::Text::underline(bool is_turned_on) {
    if (is_turned_on)
        std::cout << "\033[4m";
    else
        std::cout << "\033[24m";
}

void libANSI::Text::blink(bool is_turned_on) {
    if (is_turned_on)
        std::cout << "\033[5m";
    else
        std::cout << "\033[25m";
}

void libANSI::Text::crossedOut(bool is_turned_on) {
    if (is_turned_on)
        std::cout << "\033[9m";
    else
        std::cout << "\033[29m";
}

void libANSI::Text::reversed(bool is_turned_on) {
    if (is_turned_on)
        std::cout << "\033[7m";
    else
        std::cout << "\033[27m";
}

void libANSI::Text::hide() {
    std::cout << "\033[8m";
}

void libANSI::Text::show() {
    std::cout << "\033[28m";
}

void libANSI::Text::reset() {
    std::cout << "\033[0m";
}
