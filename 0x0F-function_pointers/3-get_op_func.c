#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - get ops function pointer of type char array
 * that accepts two inputs of int data type
 *
 * @s: a character pointer pointing to a symbol
 *
 * Return: one of the operator functions
 *
 */

int (*get_op_func(char *s))(int, int)
{
	/* struct opts of struct op_t */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j = 0;

	while (j < 5)
	{
		if (*s == *ops[j].op)
			return (ops[j].f);
		j++;
	}

	return (NULL);
}
