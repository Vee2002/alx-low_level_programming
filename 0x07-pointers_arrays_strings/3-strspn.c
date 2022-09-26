#include <string.h>
#include "main.h"

/**
*_strspn - Function that gets the length
*of a prefix substring
*@s: First parameter passed
*@accept: Second parameter passed
*Return: returns an integer
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] = accept[j])
break;
}
if (!accept[j]
		break;
		}
		return (i);
		}
