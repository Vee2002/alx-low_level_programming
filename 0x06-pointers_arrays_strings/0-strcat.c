#include "main.h"
#include <string.h>

/**
*_strcat - Concatenates two strings
*@dest: First parameter passed
*@src: Second parameter passed
*Return: returns a character
*/
char *_strcat(char *dest, char *src)
{
int a;

for (a = 0; src != '\0'; src++)
{
dest[a] = src[a];
return (*dest);
}
}
