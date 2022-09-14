#include "main.h"
/**
 * _islower - function checking lowercase.
 *
 * @c: single letter input
 *
 * Return: 0 or 1.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
