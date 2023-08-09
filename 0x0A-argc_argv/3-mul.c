#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: input
 *
 * @argv: pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int fst;
int scd;
int rest;
if (argc > 2)
{
fst = atoi(argv[1]);
scd = atoi(argv[2]);
rest = fst *scd;
printf("%d\n", rest);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
