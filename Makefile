CXX = clang++
CXCFLAGS = -Wall -Werror -Wextra -std=c++20

BIN_DIR = bin

SRC_FILES = src/*.cpp
OTHER_FILES = src/math/*.cpp

EXEC = raytracer

all: clean build

build:
	$(CXX) $(CXXFLAGS) $(SRC_FILES) $(OTHER_FILES) -o $(BIN_DIR)/$(EXEC)

clean:
	rm -rf $(BIN_DIR)/$(EXEC)

run:
	./$(BIN_DIR)/$(EXEC)
