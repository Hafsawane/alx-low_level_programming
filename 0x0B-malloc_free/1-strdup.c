#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup -  function that returns a pointer to a newly
 * allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str : string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *p;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	while ((p[i] = str[i]) != '\0')
		i++;

	return (p);
}
