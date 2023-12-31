#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: A pointer to the first string.
 * @s2: A pointer to the second string.
 *
 * Return: Negative integer If str1 < str2,
 *         If s1 == s2,
 *         0 If s1 > s2, the positive difference of
 *         the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
