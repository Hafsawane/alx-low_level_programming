#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: pointer variable
 *
 * @src: pointer variable
 *
 * @n: variable size of elements
 * Return: Always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;
const char *s = src;
while (n--)
*p++ = *s++;
return (dest);
}
