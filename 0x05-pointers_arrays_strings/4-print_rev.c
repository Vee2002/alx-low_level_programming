#include "main.h"
/**
*print_rev - Print in reverse
*@s: Parameter
*Return: returns nothing
*/
void print_rev(char *s)
{
	int len = strnlen(s);

while (len--)
putchar(*(s + len));
putchar('\n');
}
