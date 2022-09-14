/*
 * File: 0-positive_or_negative.c
*/
#include "main.h"
/**
* main -Entry point
* print_alphabet: Function prints alphabets,in lowercase,
* followed by a new line
* Return: Void
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
