#include "main.h"

/**
* _prime - function that evaluates if a number is prime recursively
* @n: number
* @i: variable
* Return: 1 if n is prime, 0 if it is not
*/

int _prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (_prime(n, i - 1));
}

/**
* is_prime_number - function that evaluates if a number is a prime
* @n: number
* Return: 1 if n is prime, 0 if it is not
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (_prime(n, n - 1));
}
