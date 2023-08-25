#include<stdio.h>
#include<lists.h>
/**
 *print_list - function that prints all
 *the elements of a list_t list.
 *@h : pointer
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h);
{
size_t i;
for (i = 0; h->next != NULL; i++)
{
	if (h->str != NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
}
return (i);
}
