#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to the number to set the bit in
 * @index: index of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
