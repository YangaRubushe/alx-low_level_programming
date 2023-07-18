/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c) {
  /* Check if c is between 97 and 122, inclusive. */
  if (c >= 97 && c <= 122) {
    return 1;
  } else {
    return 0;
  }
}
