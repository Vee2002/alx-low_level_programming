#include "main.h"

/**
*_puts_recursion - Function used
*@s: String to be printed
*Return: returns nothing
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
	return;
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
