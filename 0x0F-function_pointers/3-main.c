#include "3-calc.h"
/**
 * main -  program that performs simple operations
 *@argc: number of arguments
 *@argv: array of arguments
 * Return: 0 if success
 *
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	ptr = get_op_func(argv[2]);
	b = atoi(argv[3]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((ptr == op_div || ptr == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", ptr(a, b));
	return (0);
}
