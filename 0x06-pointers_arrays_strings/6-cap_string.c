#include "main.h"

/**
 * cap_string - Capitalizes the words
 * @x: Parameter passed
 * Return: returns a character
 */

char *cap_string(char *)
{
char spc[] = {32, 9,'\n', ',', ';', '.', '!', '?', '"', '{', '}'};

int len = 13;
int a = 0, i;

while (x[i])
{
	i = 0;
	while (i < len)
	{
		if ((a == 0 || x[a - 1] == spc[i]) && (x[a] >= 97 && x[a] <= 122))
		{
			x[a] = x[a] - 32;
			i++;
		}
		a++;
	}
}
return (x);
}

