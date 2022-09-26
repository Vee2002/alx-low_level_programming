#include <string.h>
#include "main.h"

/**
*_strpbrk - Searches a string
*for any set of bytes
*@s: String to be searched
*@accept: string to be searched in
*s1 string
*Return: returns a character
*/

char *_strpbrk(char *s, char *accept)
{
int *cmp;
cmp = strpbrk(s, accept);

return (cmp);
}
