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
	long int total = 100;
	long int count;
	long int next_term = term_1 + term_2;

	printf("%ld, %ld, ", term_1, term_2);

	for (count = 3; count <= total; count++)
	{
		if (count != total && next_term != 20365011074)
			printf("%ld, ", next_term);
		else
			printf("%ld\n", next_term);
		term_1 = term_2;

		if (next_term == 20365011074)
			break;
		term_2 = next_term;
		next_term = term_1 + term_2;
	}
	return (0);
}
