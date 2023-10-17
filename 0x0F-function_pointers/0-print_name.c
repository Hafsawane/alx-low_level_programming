#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - function that prints a name
 *@name : the string that we gonna store
 *@f : array where we gonna store a string
 *
 *Return : nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
