#include"main.h"
#include<stdlib.h>

/**
 * create_array -  function that creates an array of chars
 * and initializes it with a specific char
 *
 * @c: character
 * @size: the size of the array
 *
 * Return: pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
char *i = malloc(size);
if (size == 0 || i == 0)
return (0);
while (size--)
i[size] = c;
return (i);
}
