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

namespace libANSI {
    class Cursor {
    public:
        void moveToPosition(int x, int y);
        void moveToColumn(int x);
        void moveUp();
        void moveDown();
        void moveRight();
        void moveLeft();
        
        void moveUpByX(int x);
        void moveDownByX(int x);
        void moveRightByX(int x);
        void moveLeftByX(int x);
        
        void moveToUpBound();
        void moveToDownBound();
        void moveToRightBound();
        void moveToLeftBound();
        
        void savePosition();
        void restorePosition();
        
        void hide();
        void show();
        
        void reset();
    private:
    };
}

#endif /* Cursor_hpp */
