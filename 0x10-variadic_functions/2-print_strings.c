#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_strings - function that prints strings
 *followed by a new line.
 *
 *@separator: char
 *
 *@n: input
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *s;
unsigned int j;
va_list l;
va_start(l, n);
for (j = 0; j < n; j++)
{
s = va_arg(l, char *);
if (!s)
printf("(nil)");
else
printf("%s", s);
if (j < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(l);
}
