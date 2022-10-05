#include "main.h"
#include <stdlib.h>

/**
 * create_array - The function creates an array of char
 *				initializes it with a specific char.
 * @size: array size
 * @c: character to be intialized with
 * Return: returns char pointer.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j; /*counter*/
	char *s; /*declare a pointer*/

	if (size == 0)
		return (NULL); /*returns Null if size is ZERO*/
	s = malloc(size * sizeof(char)); /*allocating memory)*/
	if (s == NULL)
	{
		return (NULL); /*returns null if *s is NULL*/
	}
	for (j = 0; j < size ; j++)
	{
		s[j] = c; /* for loop to iterate and initiaze characters */
	}
	return (s);
}
