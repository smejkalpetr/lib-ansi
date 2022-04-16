CXX = g++
CXXFLAGS = -Wall -pedantic
CPPFLAGS = -std=c++17
LIB_STATIC_NAME = ANSI_static

BIN = ./bin/
BIN_TEST = ./bin/test/
SRC = ./include/src/
DOC = ./doc/
TEST = ./test/
INCLUDE = ./include/
OBJECTS_LIB = ./bin/objects/lib/
OBJECTS_TEST =  ./bin/objects/test/
MODUELS = ./include/src/Modules/

all: compile test doc

##---- LIBRARY COMPILATION ----##
compile: mkdir Terminal.o Cursor.o Text.o archive

Terminal.o: $(MODUELS)Terminal.cpp $(MODUELS)Terminal.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(MODUELS)Terminal.cpp -o $(OBJECTS_LIB)Terminal.o
	
Cursor.o: $(MODUELS)Cursor.cpp $(MODUELS)Cursor.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(MODUELS)Cursor.cpp -o $(OBJECTS_LIB)Cursor.o
	
Text.o: $(MODUELS)Text.cpp $(MODUELS)Text.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(MODUELS)Text.cpp -o $(OBJECTS_LIB)Text.o
	
archive:
	ar rcs $(INCLUDE)libANSI_static.a $(OBJECTS_LIB)*.o

##-----------------------------##
##-- TESTS COMPILATION & RUN --##
test: mkdir main.o TerminalTests.o CursorTests.o TextTests.o
	$(CXX) $(OBJECTS_TEST)*.o $(CXXFLAGS) $(CPPFLAGS) -L$(INCLUDE) -l$(LIB_STATIC_NAME) -o $(BIN_TEST)test-exec

main.o: $(TEST)main.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(TEST)main.cpp -o $(OBJECTS_TEST)main.o
	
TerminalTests.o: $(TEST)TerminalTests.cpp $(TEST)TerminalTests.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(TEST)TerminalTests.cpp -o $(OBJECTS_TEST)TerminalTests.o
	
CursorTests.o: $(TEST)CursorTests.cpp $(TEST)CursorTests.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(TEST)CursorTests.cpp -o $(OBJECTS_TEST)CursorTests.o
	
TextTests.o: $(TEST)TextTests.cpp $(TEST)TextTests.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(TEST)TextTests.cpp -o $(OBJECTS_TEST)TextTests.o
	
run_test:
	$(BIN_TEST)/test-exec

##-----------------------------##
##- DOCUMENTATION  GENERATION -##
doc:
	mkdir -p doc;
	doxygen ./Doxyfile;

##-----------------------------##
##--------- UTILITIES ---------##
clean:
	rm -rf $(BIN) $(DOC);
	rm -f $(INCLUDE)libANSI_static.a

mkdir:
	mkdir -p $(BIN)
	mkdir -p $(BIN_TEST)
	mkdir -p $(OBJECTS_LIB)
	mkdir -p $(OBJECTS_TEST)
