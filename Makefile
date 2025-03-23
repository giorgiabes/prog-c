# Define the compiler and flags
CC = gcc
CFLAGS = -Wall -std=c99

# Rule for dynamic number targets
%:
	$(CC) $(CFLAGS) src/prog$*.c -o prog

# Phony target (to avoid conflicts with files named after numbers)
.PHONY: all

