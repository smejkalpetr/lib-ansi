CXX = g++
CXXFLAGS = -Wall -pedantic
CPPFLAGS = -std=c++17

BIN = ./bin/
SRC = ./src/
TEST = ./test/
INCLUDE = ./include/
OBJECTS = ./bin/objects/
MODUELS = ./src/Modules/

all: compile run

compile: mkdir main.o Terminal.o Cursor.o Text.o
	$(CXX) -o $(BIN)libANSI $(CXXFLAGS) $(CPPFLAGS) $(OBJECTS)*.o

mkdir:
	mkdir -p $(BIN)
	mkdir -p $(OBJECTS)

main.o: $(TEST)main.cpp $(INCLUDE)libANSI.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(TEST)main.cpp -o $(OBJECTS)main.o
	
Terminal.o: $(MODUELS)Terminal.cpp $(MODUELS)Terminal.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(MODUELS)Terminal.cpp -o $(OBJECTS)Terminal.o
	
Cursor.o: $(MODUELS)Cursor.cpp $(MODUELS)Cursor.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(MODUELS)Cursor.cpp -o $(OBJECTS)Cursor.o
	
Text.o: $(MODUELS)Text.cpp $(MODUELS)Text.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(MODUELS)Text.cpp -o $(OBJECTS)Text.o
	
run:
	$(BIN)/libANSI

clean:
	rm -rf $(BIN);
