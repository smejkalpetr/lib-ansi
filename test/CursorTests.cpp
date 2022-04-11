//
//  CursorTests.cpp
//  libANSI
//
//  Created by Petr Šmejkal on 08.04.2022.
//

#include "CursorTests.hpp"

void CursorTests() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    libANSI::Terminal t;
    t.clearScreen();
    
    // #[------------------------------------------------------------------------------------]# //
    // CURSOR MODULE TESTS:
    libANSI::Cursor c;
    
    c.moveToPosition(30, 30);
    c.savePosition();
    std::cout << "<<-- MOVE TO (30,30)";
    std::cout.flush();
    std::this_thread::sleep_for(std::chrono::seconds(3));
    c.restorePosition();
    
    t.clearScreen();
    
    c.hide();
    std::cout << "* hide ";
    std::cout.flush();
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    c.show();
    std::cout << "* show";
    std::cout.flush();
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    t.clearScreen();

    c.moveRight();
    c.savePosition();
    std::cout << "# RIGHT";
    std::cout.flush();
    std::this_thread::sleep_for(std::chrono::seconds(3));
    c.restorePosition();
    
    c.moveUp();
    c.savePosition();
    std::cout << "# UP";
    std::cout.flush();
    std::this_thread::sleep_for(std::chrono::seconds(3));
    c.restorePosition();
    
    c.moveLeftByX(15);
    c.savePosition();
    std::cout << "# LEFT BY 15";
    std::cout.flush();
    std::this_thread::sleep_for(std::chrono::seconds(3));
    c.restorePosition();
    
    c.moveDown();
    c.savePosition();
    std::cout << "# DOWN";
    std::cout.flush();
    std::this_thread::sleep_for(std::chrono::seconds(3));
    c.restorePosition();
    
    c.reset();
    t.clearScreen();
}
