#include "main.h"
/**
 * _strlen - returns length of astring
 * @s: Parameter passed
 * Returns an integer
 */

int _strlen(char *s)
{
	int len = o;
	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
 * cap_string - Capitalizes the words
 * @str: Parameter passed
 * Return: returns a character
 */
char *cap_string(char *str)
{
int index = 0;

while (str[index])
{
	while (!(str[index] >= 'a' && str[index] <= 'z'))
		index++;
	if (str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '?' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}' ||
		index == 0)
		str[index] = str[index] - 32;


		index++;
}

return (str);
}
