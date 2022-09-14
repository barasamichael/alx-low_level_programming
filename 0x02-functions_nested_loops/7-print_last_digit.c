#include "main.h"
/**
 * print_last_digit - function prints the last digit of a number.
 * @ld: last digit result of a number.
 * Return: value of last digit.
 */
int print_last_digit(int ld)
{
	int pld;

	pld = (ld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar (pld + '0');
	return (pld);
}
