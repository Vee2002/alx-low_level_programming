#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Function to print the triangle
 * @size: Parameter passed to function
 * Return: returns nothing
 */
void print_triangle(int size)
{
	int s1, s2;

	if (size > 0)
	{
		for (s1 = 1; s1 <= size; s1++)
		{
			for ((s2 = size - s1); s2 > 0; s2--)
			{
				putchar('');
			}
			for (s2 = 0; s2 < s1; s2++)
			{
				putchar('#');
			}
			if (s1 == size)
			{
				continue;
			}
			putchar('\n');
			else
			{
			putchar('\n');
			}
		}
	}
}
