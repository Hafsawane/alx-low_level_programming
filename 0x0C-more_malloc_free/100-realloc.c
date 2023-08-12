#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory
 * block using malloc and free
 * @ptr: pointer to the memory prv allo to malloc
 * @old_size: size of the allo space for ptr
 * @new_size: size of the new memory blck to be allo
 * Return: pointer to the new memory blck, or NULL if allo fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr1;
char *old_ptr;
unsigned int j;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
ptr1 = malloc(new_size);
if (!ptr1)
return (NULL);
old_ptr = ptr;
if (new_size < old_size)
{
for (j = 0; j < new_size; j++)
ptr1[j] = old_ptr[j];
}
if (new_size > old_size)
{
for (j = 0; j < old_size; j++)
ptr1[j] = old_ptr[j];
}
free(ptr);
return (ptr1);
}
