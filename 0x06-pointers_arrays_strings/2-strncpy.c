#include "main.h"
/*
*_strncpy - copy Number of strings from source into Destinse
* @dest: destination string
* @src: source string
* @n: Number of bytes to copy
* Return: pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
