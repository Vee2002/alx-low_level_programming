#include <string.h>
#include "main.h"
/**
 * _strncat - Concatenates strings
 * @dest: First parameter
 * @src: Second parameter
 * @n: Third parameter
 * Return: returns character
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);

return (dest);
}
