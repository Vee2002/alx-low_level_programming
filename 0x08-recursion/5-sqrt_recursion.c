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
	return (-1);
else if (n == 1 || n == 0)
	return (n);
return (_sqrt(n, square));
}

/**
 * _sqrt - Checks for squareroot
 * @n: Number to check for squareroot
 * @i: Squareroot
 * Return: return 1 if squareroot is found
 * and -1 if not else recurse
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (_sqrt(n, i + 1));
}
