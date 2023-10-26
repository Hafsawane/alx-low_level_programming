#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint _ convert a binary number tring to an unsigned int.
 *
 * Description : converting a binary number to ana unsigned int
 *
 * @b: string type char
 *
 * Return: converted decimal number or 0 if there is an unconvertable char
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;

	if (b == NULL)
	return (0);
	while (*b)
{
	if (*b != '0' && *b != '1')

		return (0);

	else

		number = number * 2 + (*b++ - '0');
}
			return (number);
}
