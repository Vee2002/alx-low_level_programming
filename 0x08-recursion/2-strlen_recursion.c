#include "main.h"

/**
*_strlen_recursion - Returns the length
*of a string
*@s: String whose length is to be returned
*Return: returns an integer
*/

int _strlen_recursion(char *s)
{
if (*s)
{
_strlen_recursion(s + 1);
putchar(*s);
}
}
