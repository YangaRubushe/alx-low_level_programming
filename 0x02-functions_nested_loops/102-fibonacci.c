#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 * starting with 1 and 2, separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1 = 1, num2 = 2, temp;
	int count;

	printf("%ld, %ld", num1, num2);

	for (count = 2; count < 50; count++)
	{
		temp = num1 + num2;
		printf(", %ld", temp);

		num1 = num2;
		num2 = temp;
	}

	printf("\n");

	return (0);
}
