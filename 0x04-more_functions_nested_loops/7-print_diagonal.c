#include "main.h"

/**
* print_diagonal - Draws a diagonal line in the terminal
* @n: The number of times of the character '\'
*/
void print_diagonal(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
}
