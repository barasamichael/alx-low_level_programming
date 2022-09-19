#include "main.h"

/**
 * puts2 - prints one character out of every two
 * @string: string to be used to display characters
 *
 */

void puts2(char *string)
{
	int length, chosen_index = 0;

	/* Find length of given string */
	while (string[length] != '\0')
	{
		length++;
	}

	/* Display characters at odd index */
	while (chosen_character < length)
	{
		_putchar(string[chosen_character]);
		chosen_character += 2;
	}
	_putchar('\n');
}
