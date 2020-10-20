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


run: 
	clear
	@echo "🚀 Executing..."
	./$(BIN)/$(TARGET)

clean:
	@echo "🧹 Clearing..."
	-rm $(BIN)/*
