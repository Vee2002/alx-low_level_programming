#include "main.h"
/**
*_puts - Function to print string
*@str: Parameter passed to function
*Return: returns nothing
*/

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
	putchar(str[i]);
	i++;
}
putchar('\n');
}
