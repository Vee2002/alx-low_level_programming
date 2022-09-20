#include "mian.h"
/**
*print_array - Prints number of elements
*of an array
*@a: First parameter passed
*@n: Second parameter passed
*Return: returns nothing
*/

void print_array(int *a, int n);
{
int x;

for (x = 0; x < n; x++)
if (x != n - 1)
printf("%d, ", a[x]);
else
printf("%d", a[x]);

printf("\n");
}
