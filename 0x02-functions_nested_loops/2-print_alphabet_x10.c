#include "main.h"
/**
 * File: 2-print_alphabet_x10.c
 * main - Entry point
 * print_alphabet_x10 - This code writes a function
 * that prints 10 times the alphabets in lowecase
 * followed by a new line
 *  Return: 0 on Success
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

