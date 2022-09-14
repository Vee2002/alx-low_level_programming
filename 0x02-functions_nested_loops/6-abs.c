#include "main.h"
#include <stdlib.h>
/**
 * main: Entry point
 * description: function that computes the absolute value of an integer
 * Return: Always 0
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
