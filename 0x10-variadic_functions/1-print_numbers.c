#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_numbers - function that prints numbers
 *followed by a new line.
 *
 *@separator: char
 *
 *@n: input
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int j;
va_list l;
va_start(l, n);
for (j = 0; j < n; ++j)
{
printf("%d", va_arg(l, int));
if (j < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(l);
}
