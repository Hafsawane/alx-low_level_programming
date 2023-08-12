#include"main.h"
#include<stdlib.h>

/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: number of bytes of s2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *N;
unsigned int l1, l2, i;
unsigned int j = 0;
l1 = 0;
while (s1 && s1[l1])
l1++;
l2 = 0;
while (s2 && s2[l2])
l2++;
if (n < l2)
N = malloc(sizeof(char) * (l1 + n + 1));
else
N = malloc(sizeof(char) * (l1 + l2 + 1));
if (!N)
return (NULL);
i = 0;
while (i < l1)
{
N[i] = s1[i];
i++;
}
while (n < l2 && i < (l1 + n))
N[i++] = s2[j++];
while (n >= l2 && i < (l1 + l2))
N[i++] = s2[j++];
N[i] = '\0';
return (N);
}
