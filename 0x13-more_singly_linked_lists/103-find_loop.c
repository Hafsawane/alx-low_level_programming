#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of a list
 *
 * Return: the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr;
	listint_t *prv;

	ptr = head;
	prv = head;
	while (head && ptr && ptr->next)
	{
		head = head->next;
		ptr = ptr->next->next;

		if (head == ptr)
		{
			head = prv;
			prv = ptr;
			while (1)
			{
				ptr = prv;
				while (ptr->next != head && ptr->next != prv)
				{
					ptr = ptr->next;
				}
				if (ptr->next == head)
					break;

				head = head->next;
			}
			return (ptr->next);
		}
	}
	return (NULL);
}
