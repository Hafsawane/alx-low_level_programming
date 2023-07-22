#include "main.h"

/**
 *print_triangle - Prints a triangle of a given size
 *@size: The size of the triangle
 */
void print_triangle(int size)
{
if (size <= 0)
{
putchar('\n');
}
else
{
int i, j, spaces;
for (i = 1; i <= size; i++)
{
spaces = size - i;
for (j = 0; j < spaces; j++)
{
putchar(' ');
}
for (j = 0; j < i; j++)
{
putchar('#');
}
putchar('\n');
}
}
}
