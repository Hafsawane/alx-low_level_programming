#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 *
 * @n: int number
 *
 * @index: index
 *
 * Return: 1 , -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

if (index > sizeof(unsigned int) * 8)
return (-1);

i = 1;
i = i << index;
*n = ((*n) | i);
return (1);
}
