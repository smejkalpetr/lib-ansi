//
//  Text.hpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#ifndef Text_hpp
#define Text_hpp

#include <iostream>
#include <string>
#include <vector>

#include "Color.hpp"
#include "BrightColor.hpp"

class Text {
public:
    void print(std::string text);
    void print(const char * text);
    void printOnPosition(int x, int y, std::string text);
    
    void eraseCurrentLine();
    
    // FONT MODIFIERS:
    void color(COLOR color);
    void color(BRIGHT_COLOR color);
    void color(int color_code);
    void colorReset();
    
    void backgroundColor(COLOR color);
    void backgroundColor(BRIGHT_COLOR color);
    void backgroundColor(int color_code);
    void backgroundColorReset();
    
    void standard(); // 10
    void bold();
    void underline();
    void blink();
    void crossedOut();
    
    void hide();
    void show();
    
    void reset();
private:
    std::vector<std::string> modifiers;
};

#endif /* Text_hpp */
