#include "main.h"

/**
 * _memset - fills first n bytes of memory area pointed to by
 * @s: a pointer to a memory area.
 * @b:the constant byte.
 * @n: the number of bytes of memory to be filled with b.
 *
 * Return: a pointer to memory area, s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
