//
//  Color.hpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#ifndef Color_h
#define Color_h

/**
 * @brief Contains all basic available colors.
 * 
 */
enum COLOR {
    DEFAULT = 0,
    
    FG_BLACK = 30,
    FG_RED,
    FG_GREEN,
    FG_YELLOW,
    FG_BLUE,
    FG_MAGENTA,
    FG_CYAN,
    FG_WHITE,
    
    BG_BLACK = 40,
    BG_RED,
    BG_GREEN,
    BG_YELLOW,
    BG_BLUE,
    BG_MAGENTA,
    BG_CYAN,
    BG_WHITE
};

#endif /* Color_h */
