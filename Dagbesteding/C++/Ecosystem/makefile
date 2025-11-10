CXX=g++
CXXFLAGS=-Wall -Werror -Wextra -pedantic -ggdb -O0 -std=c++17 -Iproduct
SOURCES=$(wildcard code/*.cpp)
HEADERS=$(wildcard code/*.hpp)
TARGET =Main

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	@$(CXX) $(CXXFLAGS) -o $@ $(SOURCES)

clean:
	@rm -f $(TARGET)