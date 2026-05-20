CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -pedantic -std=c++17 -ggdb -O0 -Iproduct
SANITIZE_FLAGS = -fsanitize=address -fno-omit-frame-pointer
SOURCES = $(wildcard *.cpp)
HEADERS = $(wildcard *.hpp)
TARGET = Main

.PHONY: all clean test run

# Normal build
all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	@$(CXX) $(CXXFLAGS) -o $@ $(SOURCES)

# Run with sanitizers enabled
test:
	@$(CXX) $(CXXFLAGS) $(SANITIZE_FLAGS) -o $(TARGET) $(SOURCES)
	@echo "Built with AddressSanitizer enabled."
	@./$(TARGET)

run:
	@./$(TARGET)

clean:
	@rm -f $(TARGET)