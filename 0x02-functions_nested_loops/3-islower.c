/*
 * File: 0-positive_or_negative.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"
/**
 * main - check the code
 *
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
