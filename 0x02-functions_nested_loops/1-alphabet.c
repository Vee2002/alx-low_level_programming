#include "main.h"
/**
 * main - Entry point
 * Description - prints the alphabet, in lowercase,
 *  followed by a new line
 *  Return 0(Always Success)
 */

void print_alphabet(void)
{
	char a;

	for(a = 'a';a <= 'z';a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
