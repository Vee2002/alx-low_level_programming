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
int i;

while (s[i])
i++;
{
if (s[i] == c)
{
return (s);
}
else
return ('\0')
}
}
