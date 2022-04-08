//
//  CursorTests.cpp
//  libANSI
//
//  Created by Petr Šmejkal on 08.04.2022.
//

#include "CursorTests.hpp"

void CursorTests() {
    // #[------------------------------------------------------------------------------------]# //
    // CURSOR MODULE TESTS:
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
}
