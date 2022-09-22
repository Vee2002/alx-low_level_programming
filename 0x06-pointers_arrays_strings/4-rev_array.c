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
	int temp;

	for (i = 0; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	return (a[i]);
}
