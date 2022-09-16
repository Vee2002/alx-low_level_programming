/*
 * main - Checks code
 *
 * Return: Always 0
 */

#include "main.h"
/**
 * _islower: function to check for lowercase character
 * @c: passed as the parameter
 * Return: 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
