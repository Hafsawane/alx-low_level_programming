#include "main.h"

/*
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: Array of integers
 * @n: Number of inputs
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int swap;
j = n - 1;
for (i = 0; i < n / 2; i++, j--)
{
swap = a[i];
a[i] = a[j];
a[j] = swap;
}
}
