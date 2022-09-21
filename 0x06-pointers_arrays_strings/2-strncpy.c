#include <string.h>
#include "main.h"

/**
*_strncpy - Copies a string
*@dest: First parameter
*@src: Second parameter
*@n: Third parameter
*Return: returns a character
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest,src,n);

	return (dest);
}
