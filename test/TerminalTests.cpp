//
//  TerminalTests.cpp
//  libANSI
//
//  Created by Petr Šmejkal on 08.04.2022.
//

#include "TerminalTests.hpp"

void TerminalTests() {
    // #[------------------------------------------------------------------------------------]# //
    // TERMINAL MODULE TESTS:
    libANSI::Terminal t;
    t.clearScreen();
    
    std::cout << "TERMINAL MODULE TESTING:" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    // switches to raw mode
    t.rawMode();
    std::cout << "The termnial was switched to \"raw mode\"" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    // resizes the terminal window with giver width and heaight
    t.resize(105, 35);
    std::cout << "The terminal has been resized to 105x35" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    // changes background color #1
    t.backgroundColor(COLOR::BG_RED);
    std::cout << "Background color has been changed to COLOR::BG_RED" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));

    // changes background color
    t.backgroundBrightColor(COLOR::BG_YELLOW);
    std::cout << "Background color has been changed to COLOR::BG_YELLOW" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    // switches to cooked mode
    t.cookedMode();
    std::cout << "The termnial was switched to \"cooked mode\"" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    std::cout << "The termnial window will be minimized..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    t.minimize();
    
    std::this_thread::sleep_for(std::chrono::seconds(1));

    t.maximize();
    std::cout << "The termnial window was maximized." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    t.clearScreen();
    std::cout << "The termnial window has been cleared." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    t.reset();
    std::cout << "The termnial window has been reset." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    // #[------------------------------------------------------------------------------------]# //
}
