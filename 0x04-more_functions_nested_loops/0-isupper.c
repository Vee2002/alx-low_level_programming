#include "main.h"
#include <stdlib.h>
/**
* _isupper - Function that
*             checks for
*             uppercase letters
* @c: Parameter passed to funcrion 
* Return: 1 if characters are uppercase,
* and 0 if characters are otherwise
*/
int _isupper(int c)
{
if (c == 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
