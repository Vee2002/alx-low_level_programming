#include "main.h"
/**
 * main - Entry point
 * description: function that prints the last digit of a number.
 * Return: Always 0
 */
int print_last_digit(int x)
{
	int y;

	if (y > 0) 
	{
		y = x % 10;
	}
	else if (y < 0) 
	{
		y = x % 10;
	}
	else
	{
		_putchar(x);
	}
	return (y);
}
