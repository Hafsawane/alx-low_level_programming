#include <stdio.h>
/**
* main - prints the sum of the even-valued terms
* Return: Always 0 (Success)
*/
int main(void)
{

unsigned long int sum, k, next, j;
int i;
k = 2;
j = 1;
sum = 0;
for (i = 1; i <= 33; ++i)
{
if (j < 4000000 && (j % 2) == 0)
{
sum = sum + j;
}
next = j + k;
j = k;
k = next;
}
printf("%lu\n", sum);
return (0);
}
