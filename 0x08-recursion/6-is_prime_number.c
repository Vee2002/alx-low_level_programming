#include "main.h"

/**
*is_prime_number - function
*@n: Parameter passed
*Return: returns an integer
*/

int is_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0)
return (0);
return (is_prime(n, i-1));
}

/**
*is_prime_number - Checkd if input integer is prime
*@n: Input number
*Return: return 1 if prime and 0 otherwise
*/

int is_prime_number(int n)
{
if (n < 3)
return (0);
return (is_prime(n, n - 1));
}
