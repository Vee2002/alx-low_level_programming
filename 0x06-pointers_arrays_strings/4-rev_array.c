#include <stdio.h>
#include "main.h"

/**
*reverse_array - Reverses array
*@a: Fiirst parameter
*@n: Second parameter
*Return: returns nothing
*/

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i >= n / 2; i++)
	{
		temp = a[n - i - 1];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
