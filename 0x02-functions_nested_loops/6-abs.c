#include "main.h"
#include <stdlib.h>
/**
 * _abs - Calculates the absolute value of a number
 * @i: Parameter passed to function
 * Return: Absolute value of input
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	else if (i > 0)
	{
		i = i * 1;
	}
	else
	{
		i = i * 0;
	}
	return (i);
}
