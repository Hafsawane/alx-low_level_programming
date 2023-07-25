#include "main.h"

/**
 * puts_half - Prints last half of a string
 * @str: parameter
 */
void puts_half(char *str)
{
int half;
int n;
for (half = 0; str[half] != '\0'; half++)
{
continue;
}
if (half % 2 == 0)
{
n = half / 2;
}
else
{
n = (half - 1) / 2;
n++;
}
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
