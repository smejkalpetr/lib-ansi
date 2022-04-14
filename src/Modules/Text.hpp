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

/**
 * @brief This namespace contains all modules of the library.
 * 
 */
namespace libANSI {
    /**
     * @brief This module allows to set modifiers for text (e.g. font, color, etc.) and then print modified string.
     * 
     */
    class Text {
    public:
        /**
         * @brief Prints given text with previously set modifiers.
         * 
         * @param text std::string to be printed.
         */
        void print(std::string text);

        /**
         * @brief Prints given text with previously set modifiers.
         * 
         * @param text const char * to be printed.
         */
        void print(const char * text);

        /**
         * @brief Prints given text starting with cursor on postion [x,y].
         * 
         * @param x x-axis coord where to print.
         * @param y y-axis coord where to print.
         * @param text std::string to be printed.
         */
        void printOnPosition(int x, int y, std::string text);
        
        /**
         * @brief Clears current line.
         * 
         */
        void clearLine();

        /**
         * @brief Clears current line from cursor position to beggining.
         * 
         */
        void clearLineToBeggining();

        /**
         * @brief Clears current line from cursor position to end.
         * 
         */
        void clearLineToEnd();


        // FONT MODIFIERS:

        /**
         * @brief Changes font color for future prints.
         * 
         * @param color Value of enum COLOR. Use COLOR::FG_* for standard color and COLOR::BG_* for bright color.
         */
        void color(COLOR color);

        /**
         * @brief Changes font color for future print.
         * 
         * @param bright_color Value of enum COLOR. Use COLOR::FG_* for standard color and COLOR::BG_* for bright color.
         */
        void brightColor(COLOR bright_color);

        /**
         * @brief Changes font color for future prints.
         * 
         * @param color_code Value of int in range 0-255. May not me supported on some terminals.
         */
        void color(int color_code);

        /**
         * @brief Resets all previously set modifiers that affect font color.
         * 
         */
        void colorReset();
        

        /**
         * @brief Changes background color of text for future prints.
         * 
         * @param color Value of enum COLOR. Use COLOR::FG_* for standard color and COLOR::BG_* for bright color.
         */
        void backgroundColor(COLOR color);

        /**
         * @brief Changes background color of text for future prints.
         * 
         * @param color Value of enum COLOR. Use COLOR::FG_* for standard color and COLOR::BG_* for bright color.
         */
        void backgroundBrightColor(COLOR bright_color);

                /**
         * @brief Changes background color of text for future prints.
         * 
         * @param color Value of int in range 0-255. May not me supported on some terminals.
         */
        void backgroundColor(int color_code);

        /**
         * @brief Resets all previously set modifiers that affect font background color.
         * 
         */
        void backgroundColorReset();


        /**
         * @brief Sets modifier for future prints. The font will be default.
         * 
         */
        void standard();

        /**
         * @brief Sets modifier for future prints. The font will be bold.
         * 
         * @param is_turned_on In case you want to turn this back off, set this bool to false.
         */
        void bold(bool is_turned_on = true);

        /**
         * @brief Sets modifier for future prints. The font will be underline.
         * 
         * @param is_turned_on In case you want to turn this back off, set this bool to false.
         */
        void underline(bool is_turned_on = true);

        /**
         * @brief Sets modifier for future prints. The font will blink every one second.
         * 
         * @param is_turned_on In case you want to turn this back off, set this bool to false.
         */
        void blink(bool is_turned_on = true);

        /**
         * @brief Sets modifier for future prints. The font will be crossed out. This option is not supported with all terminals.
         * 
         * @param is_turned_on In case you want to turn this back off, set this bool to false.
         */
        void crossedOut(bool is_turned_on = true);

        /**
         * @brief Sets modifier for future prints. The background and foreground color will swap.
         * 
         * @param is_turned_on In case you want to turn this back off, set this bool to false.
         */
        void reversedColors(bool is_turned_on = true);
        
        /**
         * @brief Hides text when typing (useful for example if u want the user to write password).
         * 
         */
        void hide();
        
        /**
         * @brief Makes text visible when typing. 
         * 
         */
        void show();
        
        /**
         * @brief Resets all previously set modifiers.
         * 
         */
        void reset();
    private:

        /**
         * @brief Holds all modifiers that are being used at the moment.
         * 
         */
        std::vector<std::string> modifiers;

        /**
         * @brief Some settings must be reset after each print so that there are no issues.
         * 
         */
        void resetAfterPrint();
    };
}

#endif /* Text_hpp */
