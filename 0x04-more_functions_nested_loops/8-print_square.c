#include <stdio.h>
#include "main.h"
/**
 * print_square - Function to print a square
 * @size: Parameter passed to function
 * Return: returns nothing
 */
void print_square(int size)
{
	int s1 ,s2;
	
	if (size > 0)
	{
		for (s1 = 0; s1 < size; s1++)
		{
			for (s2 = 0; s2 < size; s2++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}

	}
	else
	{
		putchar('\n');
	}
}
