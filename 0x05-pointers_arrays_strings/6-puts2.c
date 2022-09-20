#include "main.h"
/**
*puts2 - prints half a string
*@str: Parameter passed
*Return: returns nothing
*/

void puts2(char *str)
{
int i = 0;

while (*(str + i) != '\0')
{
if (i % 2 == 0)
{
putchar(*(str + i));
}
putchar('\n');
}
}
