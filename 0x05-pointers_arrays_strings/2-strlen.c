#include <stdio.h>
#include "main.h"

/**
*_strlen - Function to print length of a string
*@*s: Pointer which is a parameter passed
*
*Return: returns an integer
*/

int _strlen(char *s)
{
int length;
char *s;

s = "My string length";
length = _strlen(s);
putchar("Length of string is: %d\n", length);
return (length);
}
