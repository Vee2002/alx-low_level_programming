#include "main.h"
/**
 * main - Entry point
 * description: function that checks for lowercase character.
 * _islower: function used to check lowercase characte
 * Parameter: c is passed as the parameter to the function _islower
 * Return: Void
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
