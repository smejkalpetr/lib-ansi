//
//  libANSI.hpp
//  libANSI
//
//  Created by Petr Šmejkal on 07.04.2022.
//

#ifndef libANSI_h
#define libANSI_h

/**
 *
 *  ####--------------------libANSI--------------------####
 *
 *  This is a small library that makes using of ANSI codes easier. ANSI codes will allow you cusomize your terminal - e.g. resize the window, change background color, change font, etc.
 *
 *  There are three modules that make this library - Terminal, Cursor and Text:
 *
 *  --> *Terminal* module facilitates functions that modify the terminal as a whole - like switching the terminal into raw mode, resizing the window, clearing the window, etc.
 *  --> *Cursor* module allows you to move the cursor around and hide/show it.
 *  --> *Text* module is made to print formatted text. You have to call functions that modify the font first (like change color, weight, etc.) and then you use the provided print function
 *     which prints given text with privously set modifiers.
 *
 *  If you want to see some of the library's features, you can run 'make compile && make run_test'.
 *
 *  TO FIND OUT MORE ABOUT THE LIBRARY'S FUNCTIONALITY CHECK OUT THE DOCUMENTATION AT ./doc
 *
 *  ####--------------------------------------------------####
 *
 *  ####--------------------SETUP--------------------####
 *
 *  How to include the library in your project:
 *  --> The library is supposed to be statcally linked to your project, which means that at first you need to run the 'make compile' command, which will create a './bin/static_lib_arch/libANSI_static.a'
 *     archive (which are basically all object files packed in one archive). Then you will need to include this header file in your code and modify your Makefile so that the linker can
 *     find the archive. It can be done by adding:  -L$(dir_where_the_lib_is_stored) -l$(lib_name_without_prefix). Note that the archive must start with 'lib' in its name.
 *
 *     You can check out the provided Makefile and its 'test' target where all that I described above is shown as an example.
 *
 *     Also this article may be useful if you want to find out more or if you want to link the library dinamically:
 *     https://renenyffenegger.ch/notes/development/languages/C-C-plus-plus/GCC/create-libraries/index
 *
 *  ####--------------------------------------------------####
 *
 */

/**
 * @file libANSI.hpp
 * @author Petr Šmejkal (petrsmejkal@hotmail.com)
 * @brief libANSI - a small library that helps with using ANSI codes to modify terminal.
 * @version 0.1 
 * @date 2022-04-14
 * 
 * @copyright Petr Šmejkal (c) 2022
 * 
 */
#include "../src/Modules/Terminal.hpp"
#include "../src/Modules/Cursor.hpp"
#include "../src/Modules/Text.hpp"

#endif /* libANSI_h */
