CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iincludes
SRC      = $(wildcard src/*.cpp)
OBJ      = $(SRC:src/%.cpp=build/%.o)
TARGET   = grafo

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $@

build/%.o: src/%.cpp | build
	$(CXX) $(CXXFLAGS) -c $< -o $@

build:
	mkdir -p build

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf build $(TARGET)

.PHONY: all run clean
