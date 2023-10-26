#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string of type chr
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

if (!b)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
number = number * 2 + (*b++ - '0');
}
return (number);
}
