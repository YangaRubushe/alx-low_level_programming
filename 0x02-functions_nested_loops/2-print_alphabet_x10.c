#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        _putchar(letter);
    }
}

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        print_alphabet();
        _putchar('\n');
    }
}
