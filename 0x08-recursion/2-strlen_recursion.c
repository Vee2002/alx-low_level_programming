#include "main.h"

/**
*_strlen_recursion - Returns the length
*of a string
*@s: String whose length is to be returned
*Return: returns an integer
*/

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}

	return (sum);
}
