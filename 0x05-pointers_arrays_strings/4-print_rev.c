#include "main.h"
/**
*_rev - prints string in reverse
*@s: First parameter passed
*Return: returns nothing
*/

void print_rev(char *s)
{
int len = strlen(s);
while (len--)
{
putchar(*(s + len));
}
putchar('\n');
}