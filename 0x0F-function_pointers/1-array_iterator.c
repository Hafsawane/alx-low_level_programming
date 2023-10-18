#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/*
 *
 * array_iterator - a function that iterates an array and gives an action
 *@array : array of strings
 *@size : size of the array
 *
 *@action : pointer to the function
 *Return : nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL size > 0)
	for (i = 0; i < size ; i++)
		action(array[i]);
}
