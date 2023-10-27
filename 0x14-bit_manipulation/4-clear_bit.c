#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 *
 * @n: int ( pointer)
 *
 * @index: index
 *
 * Return: 1 , -1 if it fails
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int i;
i = 1;
i = i << index;
if (index > sizeof(unsigned long) * 8 || n == NULL)
return (-1);
if (((*n >> index) & 1) == 1)
*n = i ^ *n;
return (1);
}
