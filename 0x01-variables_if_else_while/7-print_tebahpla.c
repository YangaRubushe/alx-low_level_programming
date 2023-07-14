#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char smile;

	for (smile = 'z'; smile >= 'a'; smile--)
		putchar(smile);

	putchar('\n');

	return (0);
}
