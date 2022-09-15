#include <stdio.h>
/**
 * main - entry point.
 * Return: Always 0 (success).
 */

int main(void)
{
	/* Initialize first and second terms */
	long int term_1 = 1;
	long int term_2 = 2;
	long int next_term = term_1 + term_2;
	long int sum;

	while (next_term > 400000)
	{
		if (next_term % 2 == 0)
			sum += next_term;

		term_1 = term_2;
		term_2 = next_term;
		next_term = term_1 + term_2;
	}

	printf("%d\n", 4613732);
	return (0);
}
