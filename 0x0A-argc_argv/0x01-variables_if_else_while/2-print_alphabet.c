#include<stdio.h>
/**
*main- print the alphabet in lower
*followed by a new line
*
*Description: 'program that prints the alphabet in lowercase'
*Return: Always 0 (Success)
*/
int main(void)
{

int n = 97;

while (n <= 122)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
