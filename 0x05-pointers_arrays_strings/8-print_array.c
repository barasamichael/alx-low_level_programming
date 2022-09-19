#include <stdio.h>
/**
 * print_array - print all elements of an integer array
 * @array: pointer to the array
 * @length: length of the array
 */
void print_array(int *array, int length)
{
	int index = 0; /* The first element in the array */

	/* while the last element is not reached */
	while (index <= length - 1)
	{
		/* Display the current element */
		printf("%d", array[index]);

		/* Display the comma for elements before the last one */
		if (index != length - 1)
			printf(", ");
	}
	printf("\n");
}
