#include <stdio.h>
#include "main.h"

/**
*_strcat - Concatenates two strings
*@dest: First parameter
*@src: Second parameter
*Return: returns a character
*/

char *_strcat(char *dest, char *src)
{
int len = 0;

while (dest[len])
{
len++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[len] = src[i];
}
dest[len] = '\0';

return (dest);
}
