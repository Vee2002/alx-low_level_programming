#include "main.h"
#include <stdlib.h>
/**
 * main: Entry point
 * description: function that computes the absolute value of an integer
 * Return: Always 0
 */
int _abs(int i)
{
	if(i > 0)
	{
		_abs(i);
	}
	else if(i < 0)
	{
		_abs(i);
	}
	else
	{
		_abs(i);
	}
	return i;
}
