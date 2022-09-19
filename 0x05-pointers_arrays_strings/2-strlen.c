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
char string;

string = "My string length";
length = _strlen(string);
putchar("Length of string is: %d\n", length);
}
