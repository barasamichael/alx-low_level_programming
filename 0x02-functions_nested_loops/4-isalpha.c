#include "main.h"
/**
 * _isalpha - function to check alphabet character.
 *
 * @c: single letter input.
 *
 * Return: 1 or 0.
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
