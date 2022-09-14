#include "main.h"
/**
 * main Entry point 
 * print_sign - This program determines if
 * a number is positive or negative or zero
 * Return: 1 if integer is positive and 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if(n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/);
}
