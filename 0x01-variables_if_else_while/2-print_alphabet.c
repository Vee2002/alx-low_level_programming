#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints  the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char c;

for (c = 'a'; c <= 'z'; c++)
	{
putchar(c);
	}

putchar('\n');
return (0);
}
