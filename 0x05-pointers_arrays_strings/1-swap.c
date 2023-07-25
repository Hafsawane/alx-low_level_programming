#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a:  Input 1
 * @b:  Input 2
 */
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
