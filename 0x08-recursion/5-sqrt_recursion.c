#include "main.h"

/**
*_sqrt_recursion - Function ot get squareroot
*@n: Parameter passed
*Return: returns an integer
*/

int _sqrt_recursion(int n)
{
	int square = 2;
if (n < 0)
{
return (-1);
}
else if (n == 1 || n == 0)
{
	return (n);
}
return (isqrt(n, square));
}
