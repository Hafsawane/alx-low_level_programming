#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 *
 * @n: int 1
 *
 * @m: int
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int res, i;

res = n ^ m;
for (i = 0; res > 0;)
{
if ((res & 1) == 1)
i++;
res = res >> 1;
}
return (i);
}
