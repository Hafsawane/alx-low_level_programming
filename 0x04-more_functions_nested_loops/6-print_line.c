#include "main.h"

/**
* print_line - Draws a straight line in the terminal
* @n: The number of times the character '_' should be printed
*/
void print_line(int n)
{
if (n <= 0)
putchar('\n');
else
{
int line;
for (line = 1; line <= n; line++)
putchar('-');
putchar('\n');
}
}
