/*
 * File: 4-isalpha.c
 * Function - Entry
 */
#include "main.h"
/**
 * _isalpha: Function that checks alphabetic order
 * @c: Parameter of the function
 * Return: 1 if character
 * * return 0 otherwise
 */
int _isalpha(int c)
/*This is the function prototype and c is the parameter*/
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
