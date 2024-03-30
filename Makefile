CXX = clang++
CXCFLAGS = -Wall -Werror -Wextra -std=c++20

BIN_DIR = bin

SRC_FILES = src/*.cpp
OTHER_FILES = src/math/*.cpp
TEST_FILES = test/*.cpp

EXEC = raytracer

all: clean build

build:
	$(CXX) $(CXXFLAGS) $(SRC_FILES) $(OTHER_FILES) -o $(BIN_DIR)/$(EXEC)

tests:
	$(CXX) $(CXXFLAGS) $(TEST_FILES) $(OTHER_FILES) -o $(BIN_DIR)/tests

clean:
	rm -rf $(BIN_DIR)/$(EXEC)

run:
	./$(BIN_DIR)/$(EXEC)
