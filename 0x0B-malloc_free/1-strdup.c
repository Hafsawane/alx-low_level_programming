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
int i;
int j;
char *a;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
a = malloc(sizeof(char) * (1 + i));
if (a == NULL)
return (NULL);
j = 0;
while (str[j])
{
a[j] = str[j];
j++;
}
return (a);
}
