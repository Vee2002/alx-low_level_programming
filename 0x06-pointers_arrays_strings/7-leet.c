#include "main.h"

/**
 * leet - Function for encoding
 * @x: Parameter passed
*Return: returns a character
*/

char *leet(char *x)
{
	int a = 0, b, l = 5;
char tr[5] = {'A', 'E', 'O', 'T', 'L'};
char trc[5] = {'4', '3', '0', '7', '1'};
while (x[a])
{
b = 0;
while (b < l)
{
if (x[a] == tr[b] || x[a] - 32 == tr[b])
	x[a] = trc[b];
b++;
}
a++;
}
return (x);
}