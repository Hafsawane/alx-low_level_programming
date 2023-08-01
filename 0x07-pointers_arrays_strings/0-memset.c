#include "main.h"

/**
* _memset - memset is a function that fills memory with a const byte
*
* @s: input pointer is the pointer to the block of memory to fill
*
* @b: input variable is a character to fill
*
* @n: unsigned int variable that gives the number of bytes to be filled
*
* Return: Always to the filled memory area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
/*
 * i is an unsigned int which is always positive
*/
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
