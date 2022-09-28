#include "main.h"

/**
*_pow_recursion - Function to raise power of x
*to y
*@x: First parameter passed
*@y: Second parameter passed
*Return: returns an integer
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
	return (1);
}
return (x * _pow_recursion(x, y - 1));
}
