#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0(Success)
 */
int main(void)
{
	int a;
	for (a >= 1; a <= 100; a++)
	{
		if (a % 3)
		{
			putchar("Fizz");
		}
		putchar('\n');
		else if (a % 5)
		{
			putchar("Buzz");
		}
		putchar('\n');
		else if (a %3 && a % 5)
		{
			putchar("FizzBuzz");
		}
		putchar('\n');
	}
return 0;
}
