#include "main.h"
/**
 * jack_bauer - function to print every day's hour.
 * h = hours, m = minutes.
 * / allows second digit rotation.
 * for loop breaks before 24:00 passing.
 * Return: 24 hour clock.
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
