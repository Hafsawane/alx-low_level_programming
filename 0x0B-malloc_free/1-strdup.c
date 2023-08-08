#include"main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
int i = 0;
int s;
char *a;
if (str == NULL)
return (NULL);
for (s = 0; str[s] != '\0'; s++)
a = malloc(s * sizeof(*str) + 1);
if (a == 0)
return (NULL);
else
{
for (; i < s; i++)
a[i] = str[i];
}
return (a);
}
