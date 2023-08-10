#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string
 * If memory allocation fails, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int total_len;
	char *concat;
	unsigned int i, j;

	if (s1 != NULL)
	{
		while (s1[len1])
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2])
			len2++;
	}

	if (n >= len2)
		n = len2;

	total_len = len1 + n + 1;
	concat = malloc(total_len * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	concat[i] = '\0';

	return (concat);
}
