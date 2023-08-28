#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: pointer to array
 *
 * @size: size of @array
 *
 * @cmp: pointer to function
 *
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	bool k;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (index = 0; index < size; index++)
		{
			k = cmp(array[index]);
			if (k == TRUE)
				return (index);
		}
	}

	return (-1);

}
