#include <stdio.h>

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c) {
  /* Check if c is between 97 and 122, inclusive. */
  if (c >= 97 && c <= 122) {
    return (1);
  } else {
    return (0);
  }
}

int main(void) {
  int r;

  r = _islower('H');
  printf("%d\n", r);
  r = _islower('o');
  printf("%d\n", r);
  r = _islower(108);
  printf("%d\n", r);
  return (0);
}
