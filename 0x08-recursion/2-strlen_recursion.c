#include "main.h"

/**
*_strlen_recursion - Returns the length
*of a string
*@s: String whose length is to be returned
*Return: returns an integer
*/

int _strlen_recursion(char *s)
{
	int y;
	char c;

if (*s != '\0')
{
	char c[] = "My string";
	y = _strlen_recursion(c);

	return (y);
}
}	
