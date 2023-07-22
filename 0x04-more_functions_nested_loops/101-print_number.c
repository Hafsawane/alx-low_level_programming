#include "main.h"

/**
* print_number - Prints an integer
* @n: The integer to be printed
*/
void print_number(int n)
{
unsigned int num = n;
/* first check if it is negative*/
if (n < 0)
{
putchar('-');
num = -num;
}
/*print the first digits*/
if ((num / 10) > 0)
print_number(num / 10);
/*print the last digit*/
putchar((num % 10) + 48);
}
