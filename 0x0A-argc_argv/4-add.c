#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: input
 *
 * @argv: pointers
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
int j;
int sum;
sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i <= argc - 1; i++)
{
for (j = 0; j < (int)strlen(argv[j]); j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
