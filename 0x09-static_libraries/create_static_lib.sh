#!/bin/bash

# Create a static library called liball.a from all the .c files in the current directory

# Compile all the .c files into object files
gcc -c *.c

# Create the static library
ar cr liball.a *.o

# Sort the object files in the library
ranlib liball.a
