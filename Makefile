CXX = g++
CXXFLAGS = -Wall -pedantic
CPPFLAGS = -std=c++17

BIN = ./bin/
SRC = ./src/
DOC = ./doc/
TEST = ./test/
INCLUDE = ./include/
STATIC = ./bin/static/
OBJECTS = ./bin/objects/
MODUELS = ./src/Modules/
LIB_STATIC_NAME = ANSI_static


all: compile


compile: mkdir Terminal.o Cursor.o Text.o archive

Terminal.o: $(MODUELS)Terminal.cpp $(MODUELS)Terminal.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(MODUELS)Terminal.cpp -o $(OBJECTS)Terminal.o
	
Cursor.o: $(MODUELS)Cursor.cpp $(MODUELS)Cursor.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(MODUELS)Cursor.cpp -o $(OBJECTS)Cursor.o
	
Text.o: $(MODUELS)Text.cpp $(MODUELS)Text.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(MODUELS)Text.cpp -o $(OBJECTS)Text.o
	
archive:
	ar rcs $(STATIC)libANSI_static.a $(OBJECTS)*.o

run:
	$(BIN)/libANSI


test: mkdir main.o
	$(CXX) $(OBJECTS)main.o $(CXXFLAGS) $(CPPFLAGS) -L$(STATIC) -l$(LIB_STATIC_NAME) -o $(TEST)test-exec

main.o: $(TEST)main.cpp $(INCLUDE)libANSI.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(TEST)main.cpp -o $(OBJECTS)main.o

run:
	$(TEST)/test-exec

doc:
	mkdir -p doc;
	doxygen ./Doxyfile;

clean:
	rm -rf $(BIN) $(DOC);

mkdir:
	mkdir -p $(BIN)
	mkdir -p $(OBJECTS)
	mkdir -p $(STATIC)
