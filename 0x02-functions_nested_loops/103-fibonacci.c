#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1 = 1, num2 = 2, temp, sum = 2;

	/* Loop to generate Fibonacci numbers and add even-valued terms to sum */
	while (num2 <= 4000000)
	{
		temp = num1 + num2;

		if (temp % 2 == 0)
			sum += temp;

		num1 = num2;
		num2 = temp;
	}

	printf("%ld\n", sum);

	return (0);
}
