CXX	      := g++
CXX_FLAGS := -std=c++17 -Wall -Wextra -ggdb

SRC     := src
INCLUDE := include
LIB     := lib
BIN   := bin

LIBRARIES  :=
TARGET     := main


$(BIN)/$(TARGET) : $(SRC)/*.cpp
	@echo "🚧 Building..."
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)

bnr:
	@echo "🚧 Building and running..."
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -L$(LIB) $(SRC)/*.cpp -o $(BIN)/$(TARGET) $(LIBRARIES)
	./$(BIN)/$(TARGET)

run: 
	clear
	@echo "🚀 Executing..."
	./$(BIN)/$(TARGET)
	
gdb:
	clear
	@echo "🚀 Running GDB..."
	gdb ./$(BIN)/$(TARGET)

dir:
	@mkdir 'bin'
	@touch bin/.gitignore
	@mkdir 'src'
	@mkdir 'include'
	@touch .gitignore ; echo "*.out\n/build\n.vscode" > .gitignore
	@mv main.cpp src/
	@echo "Basic directory structure created"

clean:
	@echo "🧹 Clearing..."
	-rm $(BIN)/*
