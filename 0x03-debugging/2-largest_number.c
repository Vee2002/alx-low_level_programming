#include "main.h"
/**
* largest_number - function returns the largest of 3 numbers
* @a: first parameter passed
* @b: second parameter passed
* @c: parameter passed
* 2-largest_number.c file
* Return: largest
*/
int largest_number(int a, int b, int c)
{
if (a > b && a > c)
{
return (a);
}
else if (b > a && b > c)
{
return (b);
}
else
{
return (c);
}
}
