#ifndef FUNCTION_POITERS_H
#define FUNCTION_POITERS_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
