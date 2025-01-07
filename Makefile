# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Iinclude -std=c++17

# Raylib library paths (adjust these if needed)
RAYLIB_INC = /home/yourusername/raylib/include  # Adjust to your raylib path
RAYLIB_LIB = /usr/local/lib
RAYLIB_FLAGS = -lraylib -lm -ldl -lpthread -lGL

# Directories
SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build

# Sources and objects
SRCS = $(wildcard $(SRC_DIR)/*.cpp)  # This already includes main.cpp
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# Output binary
TARGET = $(BUILD_DIR)/game

# Default rule
all: $(TARGET)

# Link the final executable with raylib
$(TARGET): $(OBJS)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(OBJS) -o $(TARGET) -I$(RAYLIB_INC) -L$(RAYLIB_LIB) $(RAYLIB_FLAGS)

# Compile each source file into an object file
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I$(RAYLIB_INC) -c $< -o $@

# Run the game
run: $(TARGET)
	@echo "Running $(TARGET)..."
	@./$(TARGET)

# Clean build files
clean:
	rm -rf $(BUILD_DIR)

# Phony targets
.PHONY: all clean

