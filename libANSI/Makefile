CXX = g++
CXXFLAGS = -Wall -pedantic
CPPFLAGS = -std=c++17
BIN = ./bin/
MODUELS = ./Modules/

all: compile

compile: mkdir main.o Terminal.o Cursor.o Text.o
	$(CXX) -o libANSI $(CXXFLAGS) $(CPPFLAGS) $(BIN)*.o

mkdir:
	mkdir -p $(BIN)

main.o: main.cpp libANSI.hpp 
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c main.cpp -o $(BIN)main.o
	
Terminal.o: $(MODUELS)Terminal.cpp $(MODUELS)Terminal.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(MODUELS)Terminal.cpp -o $(BIN)Terminal.o
	
Cursor.o: $(MODUELS)Cursor.cpp $(MODUELS)Cursor.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(MODUELS)Cursor.cpp -o $(BIN)Cursor.o
	
Text.o: $(MODUELS)Text.cpp $(MODUELS)Text.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(MODUELS)Text.cpp -o $(BIN)Text.o
	
run:
	./libANSI

clean:
	rm -rf libANSI $(BIN);
