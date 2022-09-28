#include "main.h"

/**
*_print_rev_recursion - Function to print string
*In reverse
*@s: String to be printed
*Return: void
*/

void _print_rev_recursion(char *s)
{
while (*s != '\0')
{
putchar(*s);
s--;
}
_print_rev_recursion(s + 1);
}
