#include "main.h"

/**
* largest_number -returns largest of 3 numbers
* @a: first integer 
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest(int a, int b, int c)

{
if (a >= b && a >= c)
{
return a;
}
else if (b >= a && b >= c)
{
return b;
}
else
{
return c;
}
return (largest);
}
