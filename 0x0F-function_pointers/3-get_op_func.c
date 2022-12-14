#include "3-calc.h"

/**
 * get_op_func - selects correct function to
 * be performed by the user
 * @s: operator
 * Return: Pointer to the function that corresponds to
 * the operator given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_subtract},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	}
int i;

i = 0;

while (i < 5)
{
	if (*s == *ops[i].op)
		return (ops[i].f);
	i++;
}
return (NULL);
}
