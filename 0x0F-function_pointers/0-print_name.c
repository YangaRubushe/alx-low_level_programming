#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints the name using a function.
 * @name: The name to be printed.
 * @f: The function to use for printing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
