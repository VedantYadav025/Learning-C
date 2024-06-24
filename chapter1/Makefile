# Makefile for compiling, running, and cleaning up a C program

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra

# Default target (first target in the file)
all: compile run clean

# Define the source file name here (e.g., make SRC=program.c)
src ?= hello.c

# Target executable name (derived from source file name)
TARGET = $(basename $(src))

# Compile the C program
compile:
	@$(CC) $(CFLAGS) -o $(TARGET) $(src)

# Run the executable
run:
	@./$(TARGET)

# Clean up by deleting the executable
clean:
	@rm -f $(TARGET)

