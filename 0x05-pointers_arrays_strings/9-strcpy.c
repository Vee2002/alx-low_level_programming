#include "main.h"
/**
*_strcpy - Copies the string
*@dest: First parameter passed
*@src: Second parameter passed
*Return: Always 0 (Success)
*/

char *_strcpy(char *dest, char *src)
{
int a;

for (a = 0; src[a] != '\0'; a++)
dest[a] = src[a];
dest[a] = '\0';

return (dest);
}
