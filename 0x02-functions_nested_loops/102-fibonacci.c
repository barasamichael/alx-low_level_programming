#include <stdio.h>
/**
 * main - entry point.
 * Return: Always 0 (success).
 */

int main(void)
{
	/* Initialize first and second terms */
	int term_1 = 0;
	int term_2 = 1;
	int total = 100;
	int count;
	int next_term = term_1 + term_2;

	printf("%d, %d, ", term_1, term_2);

	for (count = 3; count <= total; count++)
	{
		if (count != total)
			printf("%d, ", next_term);
		else
			printf("%d\n", next_term);
		term_1 = term_2;
		term_2 = next_term;
		next_term = term_1 + term_2;
	}
	return (0);
}
