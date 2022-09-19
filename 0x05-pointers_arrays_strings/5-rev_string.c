#include "main.h"

/**
 * rev_string - reverse a string parameter
 * @string: string
 */

void rev_string(char *string)
{
	char *t = string;
	char n[500]; /* Declare a character array of 1000 characters */
	short c = 0; /* The index for the first character in the array */

	/* While the last character in a C string is not reached */
	while (*string != '\0')
	{
		/* Add the current character into the array */
		n[c] = *string;

		/* Go to the next character */
		string++;

		/* Go to the next index in the array */
		c++;
	}

	/* Reset the index to original */
	c = 0;

	while (string > t)
	{
		string--; /* Go the previous character */
		*string = n[c]; /* Store the character in the index posiion of array */
		c++; /* Go to the next index */
	}
}
