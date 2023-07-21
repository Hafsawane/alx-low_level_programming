#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
int n, line;
for (line = 0; line <= 9; line++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
_putchar(n / 10 + 48)
_putchar(n % 10 + 48)
}
_putchar('\n')
}
}
