//
//  Terminal.hpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#ifndef Terminal_hpp
#define Terminal_hpp

#include <iostream>
#include <stdlib.h>

#include "../Enums/Color.hpp"

/**
 * @brief This namespace contains all modules of the library.
 * 
 */
namespace libANSI {
    /**
     * @brief This module provides a simple way to modify the terminal window.
     * 
     */
    class Terminal {
    public:
        /**
         * @brief Puts the terminal into raw mode.
         * 
         */
        void rawMode();

        /**
         * @brief Puts the terminal into cooked mode.
         * 
         */
        void cookedMode();
        

        /**
         * @brief Resizes the terminal window to given width and height.
         * 
         * @param w Width the terminal should be resized to.
         * @param h Height the terminal should be resized to.
         */
        void resize(int w, int h);

        /**
         * @brief Minimalizes the terminal window (puts it down to the dock menu bar).
         * 
         */
        void minimize();

        /**
         * @brief Maximizes the terminal window (makes it the active window).
         * 
         */
        void maximize();
        

        /**
         * @brief Clears the entire terminal area.
         * 
         */
        void clearScreen();

        /**
         * @brief Clears the terminal area from the current cursor position to the begging (top left corner).
         * 
         */
        void clearScreenToBeggining();

        /**
         * @brief Clears the terminal area from the current cursor position to the end (bottom right corner).
         * 
         */
        void clearScreenToEnd();
        
        /**
         * @brief Sets background color for the terminal window.
         * 
         * @param color Value of enum COLOR (for standard color chose from COLOR::FG_*; for bright color choose from COLOR::BG_*).
         */
        void backgroundColor(COLOR color);

        /**
         * @brief Sets background color for the terminal window.
         * 
         * @param bright_color Value of enum COLOR (for standard color chose from COLOR::FG_*; for bright color choose from COLOR::BG_*).
         */
        void backgroundBrightColor(COLOR bright_color);

        /**
         * @brief Sets background color for the terminal window.
         * 
         * @param color_code Int value in range 0-255. May not be supported on all terminals.
         */
        void backgroundColor(int color_code);
        
        /**
         * @brief Resets all previously set terminal modifiers.
         * 
         */
        void reset();
    private:
    };
}

#endif /* Terminal_hpp */
