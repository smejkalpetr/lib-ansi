//
//  TextTests.cpp
//  libANSI
//
//  Created by Petr Šmejkal on 08.04.2022.
//

#include "TextTests.hpp"

void TextTests() {
    libANSI::Terminal term;
    term.resize(105, 35);
    term.clearScreen();
    term.reset();
    
    std::cout << "TEXT MODULE TESTING:" << std::endl;
    
    libANSI::Text t;
    
    std::cout << "Let's print red text with yellow background." << std::endl;;
    
    t.color(COLOR::FG_RED);
    t.backgroundColor(COLOR::BG_YELLOW);
    
    t.print("Hello World!");
    std::this_thread::sleep_for(std::chrono::seconds(2));
    t.colorReset();
    
    std::cout << std::endl << "Let's now try using different fonts..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    t.bold();
    t.print("bold ");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    t.bold(false);
    
    t.blink();
    t.print("blink ");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    t.blink(false);
    
    t.underline();
    t.print("underline ");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    t.underline(false);
    
    t.crossedOut();
    t.print("crossedOut");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    t.crossedOut(false);
    
    std::cout << std::endl << "Now altogether with colors:" << std::endl;
    
    t.color(COLOR::FG_WHITE);
    t.backgroundColor(COLOR::BG_BLUE);
    
    t.bold();
    t.crossedOut();
    t.underline();
    t.blink();
    t.reversedColors();
    
    t.print("Hello World!");
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    std::cout << "\nReversed colors: ";
    
    t.reversedColors();
    t.print("Hello World!");
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    
    std::cout << "You can also print text at given coords (15,50):" << std::endl;
    
    t.printOnPosition(15, 50, "Hello from (15,50).");
    
    std::cout << std::endl;
    
    t.reset();
}
