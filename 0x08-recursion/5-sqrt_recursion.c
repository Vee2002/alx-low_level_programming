#include "main.h"

/**
*_sqrt_recursion - Function ot get squareroot
*@n: Parameter passed
*Return: returns an integer
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_recursion(n));
}
