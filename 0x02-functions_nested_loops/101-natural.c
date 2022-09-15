#include <stdio.h>
/**
 * print_times_table - entry point.
 * @n: input.
 * Return: Always 0 (success).
 */

int main(void){
	int max_value = 1024;
	int value;
	int sum = 0; /* Holds sum for all multiples */

	for (value = 1; value < max_value; value++)
	{
		/* Find Multiples of 3 */
		if (value % 3 == 0)
			sum += value;

		/* Find Multiples of 5 */
		if (value % 5 == 0)
			sum += value;
	}

	printf("%d\n", sum);

	return (0);
}
