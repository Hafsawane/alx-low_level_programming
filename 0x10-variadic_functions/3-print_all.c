#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * selector - function that selects and prints
 * @y: char
 *
 * @args: va_list
 *
 * Return: 0
 */
int selector(char y, va_list args)
{
char *a;
switch (y)
{
case 'c':
printf("%c", va_arg(args, int));
return (0);
case 'i':
printf("%d", va_arg(args, int));
return (0);
case 'f':
printf("%f", va_arg(args, double));
return (0);
case 's':
a = va_arg(args, char *);
if (a == NULL)
a = "(nil)";
printf("%s", a);
return (0);
}
return (1);
}
/**
 *print_all - function that prints strings
 *
 *@format: const
 *
 *Return: 0
 */
void print_all(const char * const format, ...)
{
int i;
int j;
int s = 0;
va_list args;
if (format == NULL)
{
printf("\n");
return;
}
va_start(args, format);
i = 0;
while (format[i] != '\0')
{
s = selector(format[i], args);
j = 0;
while (format[i + 1] != '\0' && j != 1 && s == 0)
{
printf(", ");
j = 1;
}
i++;
}
printf("\n");
}
