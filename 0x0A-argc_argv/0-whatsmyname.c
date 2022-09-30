#include <stdio.h>

/**
*main - Prints the program's name
*@argc: Argument count parameter
*@argv: Argument vector
*Return: returns zero
*/

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argc[0]);

return (0);
}
