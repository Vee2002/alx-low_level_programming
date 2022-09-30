#include <stdio.h>

/**
*main - Multiplies two numbers
*@argc: Argument count
*@argv: Argument vector
*Return: returns zero
*/

int main(int argc, char *argv[])
{

	int i, product = 1;


	if (argc > 1 && (argc - 1) == 2)

	{

		for (count = 0; count < argc; count++)

		{

			product *= atoi(argv[count]);

		}

		printf("%d\n",product);

	}

	else

	{

		printf("Error\n");

		return (1);

	}

	return (0);
}

