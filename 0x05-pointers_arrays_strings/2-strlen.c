#include "main.h"

/**
 * _strlen - return length of string
 * @string: input char
 * Return: length of a string
 */

int _strlen(char *string)
{
	int length = 0;

	while (*string != '\0')
	{
		string++;
		length++;
	}
	return (length);
}
