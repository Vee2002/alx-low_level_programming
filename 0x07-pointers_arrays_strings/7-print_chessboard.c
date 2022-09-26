#include "main.h"

/**
*print_chessboard - Prints a chessbord
*@a: First parameter passed
*Return: returns nothing
*/

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 1; i < 8; i++)
{
	for (j = 1; j < 8; j++)
	{
		_putchar(a[i][j]);
	}
	_putchar(10);
}
}
