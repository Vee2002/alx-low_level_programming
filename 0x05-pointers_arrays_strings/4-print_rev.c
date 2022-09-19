#include "main.h"
/**
*print_rev - Print in reverse
*@s: Parameter
*Return: returns nothing
*/
void print_rev(char *s)
{
int i = 0;
while (*(str + i) != '\0')
{
putchar(*(str + i));
i--;
putchar('\n');
}
}
