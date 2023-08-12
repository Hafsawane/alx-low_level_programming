#include "main.h"
#include <stdlib.h>

/**
* _memset - function that fills memory with a constant byte
* @s: memory area
* @b: char
* @n: number of times to copy b
* Return: s the pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
s[j] = b;
}
return (s);
}
/**
 * _calloc - function that allocates memory
 * for an array using malloc
 * @nmemb: The number of elements to allocate memory for
 * @size: The size of each element
 * Return: A pointer to the allocated memory, or NULL if the allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, size * nmemb);
return (ptr);
}
