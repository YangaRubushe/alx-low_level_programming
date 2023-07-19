#include <stdio.h>

#define DIGITS 1000

/**
 * print_number - Print a number represented as an array of digits
 * @num: Pointer to the array of digits
 * @size: Size of the array (number of digits)
 */
void print_number(int *num, int size)
{
	int i;

	for (i = size - 1; i >= 0; i--)
		printf("%d", num[i]);
}

/**
 * add_numbers - Add two numbers represented as arrays of digits
 * @num1: Pointer to the first number's array of digits
 * @num2: Pointer to the second number's array of digits
 * @size1: Size of the first array (number of digits)
 * @size2: Size of the second array (number of digits)
 * @result: Pointer to store the sum of the two numbers as an array of digits
 *
 * Return: The size of the result array (number of digits)
 */
int add_numbers(int *num1, int *num2, int size1, int size2, int *result)
{
	int carry = 0, sum, i;

	for (i = 0; i < size1 || i < size2 || carry; i++)
	{
		sum = carry;
		if (i < size1)
			sum += num1[i];
		if (i < size2)
			sum += num2[i];

		result[i] = sum % 10;
		carry = sum / 10;
	}

	return (i);
}

/**
 * main - Entry point
 *
 * Description: Finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2, separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1[DIGITS] = {0}, num2[DIGITS] = {0}, temp[DIGITS] = {0};
	int size1 = 1, size2 = 1, temp_size, i;

	num1[0] = 1;
	num2[0] = 2;

	printf("%d, %d", num1[0], num2[0]);

	for (i = 2; i < 98; i++)
	{
		temp_size = add_numbers(num1, num2, size1, size2, temp);
		printf(", ");
		print_number(temp, temp_size);

		for (int j = 0; j < temp_size; j++)
		{
			num1[j] = num2[j];
			num2[j] = temp[j];
		}
		size1 = size2;
		size2 = temp_size;
	}

	printf("\n");

	return (0);
}
