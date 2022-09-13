#include "main.h"
/**
 * main - Entry point
 * Description: prints the alphabet, in lowercase,
 *  followed by a new line
 *  Return: Always 0 (Success)
 */

char print_alphabet(void)
{
	char a;

	for(a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
_putchar('\n');

return (0);
}
