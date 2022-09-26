#include <string.h>
#include "main.h"

/**
*_memcpy - Function that copies a block of memory
*@dest: First parameter passed
*@src: Second parameter passed
*@n: Third parameter passed
*Return: returns a character
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
