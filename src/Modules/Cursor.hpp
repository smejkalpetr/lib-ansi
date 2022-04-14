//
//  Cursor.hpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#ifndef Cursor_hpp
#define Cursor_hpp

#include <iostream>
#include <string>

/**
 * @brief This module allows easy cursor manipulation.
 * 
 */
namespace libANSI {
    class Cursor {
    public:
        /**
         * @brief Moves cursor to given coordinations [x,y].
         * 
         * @param x The x-axis coord.
         * @param y The y-axis coord.
         */
        void moveToPosition(int x, int y);

        /**
         * @brief Moves cursor to x-th colomn.
         * 
         * @param x The x-axis coord.
         */
        void moveToColumn(int x);

        /**
         * @brief Mooves cursor one step upwards.
         * 
         */
        void moveUp();

        /**
         * @brief Moves cursor one step downwards.
         * 
         */
        void moveDown();

        /**
         * @brief Moves cursor one step to the right.
         * 
         */
        void moveRight();

        /**
         * @brief Moves cursor one step to the left.
         * 
         */
        void moveLeft();
        
        /**
         * @brief Moves cursor upwards by x.
         * 
         * @param x Cursor movement steps to be done.
         */
        void moveUpByX(int x);

        /**
         * @brief Moves cursor downwards by x.
         * 
         * @param x Cursor movement steps to be done.
         */
        void moveDownByX(int x);

        /**
         * @brief Moves cursor to the right by x.
         * 
         * @param x  Cursor movement steps to be done.
         */
        void moveRightByX(int x);

        /**
         * @brief Moves cursor to the left by x.
         * 
         * @param x  Cursor movement steps to be done.
         */
        void moveLeftByX(int x);
        

        /**
         * @brief Moves cursor upwards as much as possible.
         * 
         */
        void moveToUpBound();

        /**
         * @brief Moves cursor downwards as much as possible.
         * 
         */
        void moveToDownBound();

        /**
         * @brief Moves cursor to the right as much as possible.
         * 
         */
        void moveToRightBound();

        /**
         * @brief Moves cursor to the left as much as possible.
         * 
         */
        void moveToLeftBound();
        

        /**
         * @brief Saves current cursor position.
         * 
         */
        void savePosition();

        /**
         * @brief Restores previously saved cursor position.
         * 
         */
        void restorePosition();
        
        /**
         * @brief Makes the cursor invisible.
         * 
         */
        void hide();

        /**
         * @brief Makes the cursor visible.
         * 
         */
        void show();
        
        /**
         * @brief Resets all previously set cursor modifiers.
         * 
         */
        void reset();
    private:
    };
}

#endif /* Cursor_hpp */
