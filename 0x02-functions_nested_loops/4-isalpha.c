#include "main.h"
/**
 * main -Entry point
 * description: function that checks for alphabetic character.
 * Return: Void
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c<= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
