#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given index
 *
 * @n: num
 *
 * @index: index
 *
 * Return: Value of bit at index, or -1 if it fails
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

if (index > sizeof(size_t) * 8)
return (-1);
for (i = 0; i < index; i++)
n = n >> 1;
return ((n & 1));
}
