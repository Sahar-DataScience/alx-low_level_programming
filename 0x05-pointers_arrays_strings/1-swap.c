#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 *
 * @a : pointers of integer
 * @b : pointers of integers
 *
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
