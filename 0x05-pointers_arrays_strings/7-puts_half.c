#include "main.h"

/**
 * puts_half - Displays the second half of a string
 *
 * @string: string parameter
 *
 */
void puts_half(char *string)
{
	int length = 0; /* Holds the length of the string */
	int n;
	int i;

	/* Find the length of the string */
	while (string[length] != '\0')
	{
		length++;
	}

	/* If the length of the string is even */
	if (length % 2 == 0)
	{
		for (i = length / 2; string[i] != '\0'; i++)
		{
			_putchar(string[i]);
		}

	} else if (length % 2) /* If the length of the string is odd */
	{
		for (n = (length - 1) / 2; n < length - 1; n++)
		{
			_putchar(string[n + 1]);
		}
	}
	_putchar('\n');
}
