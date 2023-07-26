/* Function to write a character to stdout */
int _putchar(char c);

/* Function to concatenate two strings */
char *_strcat(char *dest, char *src);

/* Function to concatenate two strings, but with a limited number of characters from source */
char *_strncat(char *dest, char *src, int n);

/* Function to copy a portion of one string into another */
char *_strncpy(char *dest, char *src, int n);

/* Function to compare two strings */
int _strcmp(char *s1, char *s2);

/* Function to reverse an array of integers */
void reverse_array(int *a, int n);

/* Function to convert a string to uppercase */
char *string_toupper(char *str);

/* Function to capitalize the first letter of each word in a string */
char *cap_string(char *str);

/* Function to convert a string to "leet" speak */
char *leet(char *str);

/* Function to apply the rot13 substitution cipher to a string */
char *rot13(char *str);

/* Function to print an integer number to stdout */
void print_number(int n);

/* Function to add two numbers represented as strings */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/* Function to print the content of a buffer in a formatted way */
void print_buffer(char *b, int size);

/* Main function of the program */
int main(void);
