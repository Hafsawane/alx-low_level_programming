#include "main.h"
/**
* _isdigit - checks if a character is a digit or not
* @c: character to be checked
* Return: 0 if c is not a digit 1 otherwise
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
