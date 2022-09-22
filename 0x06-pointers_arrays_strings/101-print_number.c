#include <stdio.h>
#include "main.h"

/**
*print_number - Prints an integer
*@n: Parameter passed
*Return: returns nothing
*/

void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
	putchar('-');
num = -num;
}
if (num / 10)
{
print_numbers(num / 10);
}
_putchar((num % 10) + '0');
}
