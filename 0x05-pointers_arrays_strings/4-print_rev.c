#include "main.h"

/**
  * print_rev - prints string in reverse followed by a new line
  * @string: input string
  * Return: no return
 */

void print_rev(char *string)
{
	int count = 0; /* counts the length of the string */

	/* while the first ascii character is not reached */
	while (*string != '\0')
	{
		string++; /* Go to the next character */
		count++; /* Count the current character */
	}

	/* while the last character is not reached */
	while (count > 0)
	{
		string--;
		_putchar(*string); /* Display the current character */
		count--; /* Go to the next character */
	}
	_putchar('\n'); /* Go to the next line */
}
