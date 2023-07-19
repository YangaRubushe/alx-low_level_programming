#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2, separated by commas and spaces.
 * Uses "Big Integer" arithmetic to handle large numbers without overflow.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int num1 = 1, num2 = 2, temp;
	int count;

	printf("%lu, %lu", num1, num2);

	for (count = 2; count < 98; count++)
	{
		temp = num1 + num2;
		printf(", %lu", temp);

		num1 = num2;
		num2 = temp;
	}

	printf("\n");

	return (0);
}
