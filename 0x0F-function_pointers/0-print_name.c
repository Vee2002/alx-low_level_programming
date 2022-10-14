#include <stddef.h>
#include "function_pointers.h"

/**
*print_name - Function that prints a name
*@name: pointer to name
*@f: Pointer to a function
*/

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
