#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - Pritns strings
 * @separator: String to be printed between strings
 * @n: Number of strings to be passed
 * Return: retunrs nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *string;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		printf("%s", string != NULL ? string : "(nil)");

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
