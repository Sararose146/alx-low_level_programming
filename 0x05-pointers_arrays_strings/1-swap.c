#include "main.h"

/**
 *swap_int - A function to swaps the values of two intergrs a and b
 *
 * @a: input parameter
 * @b: input parameter
 *
 * return: return a and b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
