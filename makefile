# The makefile for the project will compile all c file in the various folders, then the main.c

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c99

# Source files
SRC = $(wildcard */*.c)

# Object files
OBJ = $(SRC:.c=.o)

# Executable
EXEC = main

# Build target
all: $(EXEC)

# Link
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

# Compile
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	rm -f $(OBJ) $(EXEC)

# Rebuild
rebuild: clean all

# Run
run: all
	./$(EXEC)
