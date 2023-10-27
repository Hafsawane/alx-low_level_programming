#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 *
 * @n: decimal number
 *
 */

void print_binary(unsigned long int n)
{
if (n == 0)
return;
print_binary(n >> 1);
if ((n & 1) == 1)
_putchar('1');
if ((n & 1) == 0)
_putchar('0');
}

