#include "main.h"
/**
 * swap_int - Swaps variables
 * @a: First parameter
 * @b: Second parameter
 * Return: returns integer values
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = b;
	*b = a;
}
