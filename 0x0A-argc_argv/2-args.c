#include <stdio.h>

/**
* main -  prints all arguments it receives
* @argc: number of command-line arguments passed to the program
* @argv: Array of pointers to strings contain the arguments
* Return: 0 its successful implementation
*/

int main(int argc, char **argv __attribute__((unused)))
{
int i;
for (i = 0; i < argc ; i++)
printf("%s\n", argv[i]);
return (0);
}
