#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string of type chr
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;

for (int i = 0; b[i] != '\0'; i++)
{
number = number << 1;
if (b[i] == '1')
{
number = number | 1;
}
else if (b[i] != '0')
{
return (0);
}
}
return (number);
}
