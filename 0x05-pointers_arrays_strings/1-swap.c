#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: int to swap
 * @b: int to swap
 */
void swap_int(int *a, int *b)
{
	int x;


	x = *a;
	*a = *b;
	*b = x;
}
