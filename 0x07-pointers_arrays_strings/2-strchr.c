#include <string.h>
#include "main.h"

/**
*_strchr - Locates a character in a string
*@s: First parameter passed
*@c: Second parameter passed
*Return: returns a character
*/

char *_strchr(char *s, char c)
{
char i;

while (c[i])
i++;
{
if (c[i] == s)
{
return (s);
}
else
return ('\0')
}
}
