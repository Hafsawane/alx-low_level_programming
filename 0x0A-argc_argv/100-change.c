#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: parameter
 *
 * @argv: Array pointer that holds the arguments
 *
 * Return: 0 if arg < 0 , Error if arg > 1
 *
 */

int main(int argc, char *argv[])
{
int coins_number = 0;
int cents;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
cents = atoi(argv[1]);
while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else if (cents >= 1)
cents -= 1;
coins_number += 1;
}
}
printf("%d\n", coins_number);
return (0);
}
