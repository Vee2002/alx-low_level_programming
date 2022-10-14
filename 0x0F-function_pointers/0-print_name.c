#include <sddef.h>

/**
*print_name - Function that prints a name
*@name: Name to be printed
*@f: Pointer to a function
*/

void print_name(char *name, void (*f)(char *))
{
if (f)
f(name);
}
