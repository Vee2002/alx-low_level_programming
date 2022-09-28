#include "main.h"

/**
*factorial - Function to print factorial
*of an integer
*@n: Integer passed as parameter
*Return: returns an integer
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
