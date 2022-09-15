/*
 * main - Checks code
 *
 * Return: Always 0
 */

#include "main.h"
/**
 * _islower: function to
 *          check if alphabet characters
 *          are in lowercase
 *
 * @c: passed as the parameter
 * Return: 1 for lowercasse , 0 if not lowercase
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
