CXX=g++
CXXFLAGS=-Wall -Werror -Wextra -pedantic -ggdb -O0 -std=c++17 -Iproduct
SOURCES=$(wildcard *.cpp)
HEADERS=$(wildcard *.hpp)
TARGET=Main
# TEST_TARGET=MainTest
# TEST_SOURCES=

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	@$(CXX) $(CXXFLAGS) -o $@ $(SOURCES)

clean:
	@rm -f $(TARGET) $(TEST_TARGET)

# valgrind: $(TARGET)
#     valgrind --leak-check=full --show-leak-kinds=all -s ./$(TARGET)

# test: $(TEST_TARGET)

# $(TEST_TARGET): $(TEST_SOURCES) $(HEADERS)
#     @$(CXX) $(CXXFLAGS)  $(TEST_SOURCES) -o $(TEST_TARGET) -lgtest -lpthread
#     valgrind --leak-check=full ./$(TEST_TARGET)
