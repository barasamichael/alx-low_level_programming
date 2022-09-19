#include "main.h"

/**
 *swap_int - swaps the values of two integer variable pointers
 *@a: pointer
 *@b: pointer
 */

void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
