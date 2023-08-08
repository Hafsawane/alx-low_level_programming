#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: input of arguments
 * @av: input
 *
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
int size;
int a;
int b;
int c;
char *n;
if (ac == 0 || av == NULL)
return (NULL);
size = ac;
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
{
size++;
}
}
n = malloc(size + 1 * sizeof(char));
if (n == NULL)
return (NULL);
c = 0;
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
{
n[c] = av[a][b];
c++;
}
n[c] = '\n';
c++;
}
return (n);
}
