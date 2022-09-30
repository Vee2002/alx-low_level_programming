#include <stdio.h>
#include <stdib.h>

/**
*main - Multiplies two numbers
*@argc: Argument count
*@argv: Argument vector
*Return: returns zero
*/

int main(int argc, char *argv[])
{
	int count, mul = 1;

	if (argc > 1 && (argc - 1) == 2)
	{
		for (count = 1; count < argc; count++)
		{
			mul *= atoi(argv[count]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
