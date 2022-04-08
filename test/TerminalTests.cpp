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
    
    // switches to raw mode
    t.rawMode();
    std::cout << "The termnial was switched to \"raw mode\"" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    // resizes the terminal window with giver width and heaight
    t.resize(105, 35);
    std::cout << "The terminal has been resized to 105x35" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    // changes background color #1
    t.backgroundColor(COLOR::RED);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Background color has been changed to COLOR::RED" << std::endl;

    // changes background color
    t.backgroundColor(BRIGHT_COLOR::BRIGHT_RED);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Background color has been changed to BRIGHT_COLOR::BRIGHT_RED" << std::endl;
    
    // switches to cooked mode
    t.cookedMode();
    std::cout << "The termnial was switched to \"cooked mode\"" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    t.minimize();
    std::cout << "The termnial window was minimized." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    t.maximize();
    std::cout << "The termnial window was maximized." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    t.clearScreen();
    std::cout << "The termnial window has been cleared." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    t.reset();
    std::cout << "The termnial window has been reseted." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    // #[------------------------------------------------------------------------------------]# //
}
