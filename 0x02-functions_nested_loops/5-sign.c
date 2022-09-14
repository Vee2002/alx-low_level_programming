/*
 * File: 5-sign.c
 */

#include "main.h"
/**
 * print_sign: determines if a number is positive or negative or zero
 * @n: Parameter passed to function
 * Return: 1 if positive and 0 if zero
 * -1 if negative, '/' if not a digit
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
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
