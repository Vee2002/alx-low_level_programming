#include "main.h"
/**
 * main - Entry point
 * description: function that checks for lowercase character.
 * Return: Void
 */
int _islower(int c)
{

	if(c >= 'a' && c <='z')
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
