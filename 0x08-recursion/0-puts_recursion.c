#include "main.h"

/**
 * _puts_recursion - prints the character at current index
 * @s: pointer to the first character of the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar("\n");
		return;
	}

	_putchar("%c", *s);
	s++;
	_puts_recursion(s);
}


