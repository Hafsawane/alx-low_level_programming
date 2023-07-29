#include "main.h"

/**
*_strncat - appends src string to dest string and it will use n elements
* @dest: Destination
* @src: Source
* @n: number of elements
* Return: Destination
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
{
continue;
}
for (j = 0; dest[j] != '\0' && j < n; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
