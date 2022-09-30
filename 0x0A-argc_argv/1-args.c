#include <stdio.h>

/**
*main - Prints the number of argumnents
*passed to the program
*@argc: Parameter counts number of args
*@argv: Argument vector
*Return: returns zero (Success)
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);

return (0);
}
