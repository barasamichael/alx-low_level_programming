#include "main.h"
/**
 * print_alphabet -function that prints alphabet in lower case.
 *
 * Return: Always 0 (success).
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
