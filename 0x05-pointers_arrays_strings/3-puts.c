#include "main.h"

/**
 * _puts - prints string
 * @str: input string
 * Return: no return
 */

void _puts(char *string)
{
	while (*string != '\0')
	{
		_putchar(*string);
		string++;
	}
	_putchar('\n');
}
