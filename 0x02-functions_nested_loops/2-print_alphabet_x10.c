#include "main.h"
/**
 * main - Entry point
 * Description: This code prints lowercase alphabets 10 times 
 *  followed by a new line
 *  Return: Always 0(Success)
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

