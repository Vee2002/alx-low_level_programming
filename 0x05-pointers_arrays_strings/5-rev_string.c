#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*rev_string - Reverses a string
*@s: parameter passed
*Returde <stdio.h>
#include <string.h>
#include "main.h"

/**
*rev_string - Reverses string
*@s: Parameter passed
*Return: returns nothing
*/

void rev_string(char *s)
{
int len = strlen(s);
for (len = 0; (*(s-len)); s--)
{
putchar(len);
}
putchar('\n');
}
