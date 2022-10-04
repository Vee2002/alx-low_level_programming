#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: returns a character
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = string_length(s1) + string_length(s2) + 1;
	new_str = malloc(sizeof(char) * n);
	
	if (new_str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		new_str[j] = s1[i];
		i++;
		j++;
	}
	while (s2[i] != '\0')
	{
		new_str[j] = s2[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
/**
 * string_length - Returns length of a string
 * @pointer: Pointer
 * Return: length of c
 */

int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}

	return (c);
}
