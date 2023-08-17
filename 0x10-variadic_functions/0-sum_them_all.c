#include <stdarg.h>
/**
 *sum_them_all -  function that returns the sum
 *of all its parameters.
 *
 *@n: parameter
 *
 * Return: s
 */
int sum_them_all(const unsigned int n, ...)
{
int s;
unsigned int k;
va_list l;
va_start(l, n);
for (k = 0, s = 0; k < n; k++)
s += va_arg(l, int);
va_end(l);
return (s);
if (n == 0)
return (0);
}
