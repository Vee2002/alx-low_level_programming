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
	putchar('\n');
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}
