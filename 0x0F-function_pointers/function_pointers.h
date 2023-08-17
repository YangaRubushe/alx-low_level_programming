#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

/* The following line declares a function named `print_name` that accepts a pointer to a character array and a function pointer as parameters. */
void print_name(char *name, void (*f)(char *));

/* The following line declares a function named `_putchar` that accepts a character and returns an integer. */
int _putchar(char c);

/* The following line declares a function named `array_iterator` that accepts an integer array, its size, and a function pointer as parameters. */
void array_iterator(int *array, size_t size, void (*action)(int));

/* The following line declares a function named `int_index` that searches for an integer in an array and returns its index. */
int int_index(int *array, int size, int (*cmp)(int));

#endif

