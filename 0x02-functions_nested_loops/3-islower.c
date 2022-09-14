/*
 * File: 0-positive_or_negative.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"
/**
  * _islower: function used to check lowercase characte
 * @c: passed as the parameter to the function _islower
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
