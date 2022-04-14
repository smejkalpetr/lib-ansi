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

#include "Cursor.hpp"
#include "../Enums/Color.hpp"

namespace libANSI {
    class Text {
    public:
        void print(std::string text);
        void print(const char * text);
        void printOnPosition(int x, int y, std::string text);
        
        void clearLine();
        void clearLineToBeggining();
        void clearLineToEnd();
        
        // FONT MODIFIERS:
        void color(COLOR color);
        void brightColor(COLOR bright_color);
        void color(int color_code);
        void colorReset();
        
        void backgroundColor(COLOR color);
        void backgroundBrightColor(COLOR bright_color);
        void backgroundColor(int color_code);
        void backgroundColorReset();
        
        void standard();
        void bold(bool is_turned_on = true);
        void underline(bool is_turned_on = true);
        void blink(bool is_turned_on = true);
        void crossedOut(bool is_turned_on = true);
        void reversedColors(bool is_turned_on = true);
        
        void hide();
        void show();
        
        void reset();
    private:
        std::vector<std::string> modifiers;
        void resetAfterPrint();
    };
}

#endif /* Text_hpp */
