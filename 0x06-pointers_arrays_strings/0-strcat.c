#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strcat - starting point of a function
 *
 * @dest: First values
 *
 * @src: second value
 *
 * Return: Return nothing
 */


char *_strcat(char *dest, char *src)
{
	int len_dest = strlen(dest);
	int len_src = strlen(src);
	int str_size = len_dest + len_src + 1;
	char *a = calloc(str_size + 1, sizeof(char));

	for (int i = 0; i < len_dest; i++)
		a[i] = dest[i];

	a[len_dest] = ' ';
	
	for (int i = 0; i < len_src; i++)
		a[len_dest + i] = src[i];
	
	a[str_size - 1] = '\0';
	_putchar('\n');
	return (a);
}
