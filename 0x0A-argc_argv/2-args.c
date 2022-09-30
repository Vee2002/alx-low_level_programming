#include <stdio.h>

/**
*main- Prints all arguments
*@argc: Argument count
*@argv: Argument vector
*Return: returns zero
*/

int main(int argc, char *argv[])
{
int count;

for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
