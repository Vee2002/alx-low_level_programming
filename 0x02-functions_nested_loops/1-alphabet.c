#include "main.h"
/**
* main -Entry point
* print_alphabet -This function prints the english alphabet from a-z,
* followed by a new line
* No arguments - Arguments are not passed
* Return: Void.
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
