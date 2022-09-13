#include "main.h"

/**
 * main - Display all lowercase characters
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char current = 'a'; /* this is the first character */
	char last = 'z'; /* this is the last character */

	while (current <= last)
	{
		_putchar(current); /* display current character */
		current++; /* increment current character */
	}
	
	_putchar('\n');

	return (0);
}
