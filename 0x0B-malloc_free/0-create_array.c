#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
*create_array - Creates an array of characters
*@int: First parameter passed
*@c: Second parameter passed
*Return: returns a character
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
return (NULL);

array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}
