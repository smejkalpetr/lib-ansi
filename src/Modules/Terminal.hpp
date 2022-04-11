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

namespace libANSI {
    class Terminal {
    public:
        void rawMode();
        void cookedMode();
        
        void resize(int w, int h);
        void minimize();
        void maximize();
        
        void clearScreen();
        void clearScreenToBeggining();
        void clearScreenToEnd();
        
        void backgroundColor(COLOR color);
        void backgroundBrightColor(COLOR bright_color);
        void backgroundColor(int color_code);
        
        void reset();
    private:
    };
}

#endif /* Terminal_hpp */
