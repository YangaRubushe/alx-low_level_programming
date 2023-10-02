#include "main.h"

/**
 * read_textfile - Read a text file and print its content.
 * @filename: The name of the text file.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed.
 *         On error, 0 is returned.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, letters2 = 0;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc((letters + 1) * sizeof(char));
	if (buff == NULL)
		return (0);

	buff[letters] = '\0';
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	letters2 =  read(file, buff, letters);
	write(STDOUT_FILENO, buff, letters2);
	close(file);
	free(buff);
	return (letters2);
}
