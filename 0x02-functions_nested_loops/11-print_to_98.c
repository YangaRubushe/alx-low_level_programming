#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Return: void (no return value)
 */
void print_to_98(int n)
{
	/* Print the starting number */
	printf("%d", n);

	/* Determine the direction of the loop (increment or decrement) */
	int step = n <= 98 ? 1 : -1;

	/* Loop until we reach 98 */
	while (n != 98)
	{
		/* Print the next number separated by a comma and a space */
		printf(", %d", n += step);
	}

	/* Print a new line after the loop */
	printf("\n");
}

