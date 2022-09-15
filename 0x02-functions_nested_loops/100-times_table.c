#include <stdio.h>
#include "main.h"
/**
 * print_times_table - display times table for values 15 < n <= 0
 * @n: input
 * Return: Always 0 (success).
 */

void print_times_table(int n)
{
	int table_size = n;
	
	if (table_size <= 15 && table_size >= 0)
	{
		/* Display row */
		int row;
		
		for (row = 0; row <= table_size; row++)
		{
			int product; /* holds the product of row and column */
			int column;
			
			for (column = 0; column <= table_size; column++)
			{
				product = row * column;
				
				if (column != 0)
					printf("%4d", product);
				else
					printf("%d", product);
				
				/* Ensure only trailing comma */
				if (column != table_size)
					printf(",");
			}
			printf("\n");
		}
	}
}
