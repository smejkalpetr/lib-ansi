//
//  main.cpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#include <iostream>
#include <thread>

#include "libANSI.hpp"

int main(int argc, const char * argv[]) {
    
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
    
    
    // #[------------------------------------------------------------------------------------]# //
    // CURSOR MODULE TESTS:
    t.rawMode();
    libANSI::Cursor c;
    
    c.hide();
    std::cout << "The cursor has been hidden for 3 seconds." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    c.show();
    std::cout << "The cursor is now visible again!" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    c.moveToPosition(30, 50);
    std::cout << "The cursor has been moved to (30,50)." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    c.moveUp();
    std::cout << "The cursor has been moved UP." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    c.moveLeft();
    std::cout << "The cursor has been moved LEFT." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    c.moveDown();
    std::cout << "The cursor has been moved DOWN." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    c.moveRight();
    std::cout << "The cursor has been moved RIGHT." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    return 0;
}
