# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 09:46:28 by tmalheir          #+#    #+#              #
#    Updated: 2024/11/27 11:48:46 by tmalheir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CXX = c++

# Directories
SRC_DIR := src/
INC_DIR := include/
BUILD_DIR := build/
TARGET_DIR := .

# Target executable name
TARGET := Account

# Source files
SRC_EXT := cpp
SRC := $(shell find $(SRC_DIR) -type f -name *.$(SRC_EXT))

# Object files
OBJ := $(patsubst $(SRC_DIR)%, $(BUILD_DIR)/%, $(SRC:.$(SRC_EXT)=.o))

# Header files
INC :=-I$(INC_DIR)

# Flags
CXX_FLAGS = -Wall -Wextra -Werror -std=c++98

# Executable
EXEC := $(TARGET_DIR)/$(TARGET)

# Default make target
all: directories $(EXEC)

# Ensure build directories exist
directories:
	@mkdir -p $(BUILD_DIR)

# Rule for linking object files into executable
$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) $^ -o $(EXEC)

# Rule for compiling source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.$(SRC_EXT)
	$(CXX) $(CXX_FLAGS) $(INC) -c -o $@ $<

# Clean build artifacts
clean:
	@rm -rf $(BUILD_DIR)

fclean: clean
	@rm -rf $(EXEC)

# Run the executable
run:
	@./$(EXEC)

# Phony targets
.PHONY: all clean fclean run
