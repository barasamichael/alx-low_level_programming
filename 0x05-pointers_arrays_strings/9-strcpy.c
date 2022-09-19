#include "main.h"

/**
 * *_strcpy - copy a string pointed by src to that pointed by dest
 * @destination: string pointer that will contain the copy
 * @source: string pointer that will contain the original
 * Return: a pointer to the destination variable
 */

char *_strcpy(char *destination char *source)
{
	int index;

	/* For every element in source string, create a copy in destination string */
	for (index = 0; source[index] != '\0'; index++)
	{
		destination[index] = source[index]; /* Create a copy */
	}
	destination[index] = '\0'; /* Add the null character */
	
	return (destination); /* Return the pointer to the destination pointer variable */
}
