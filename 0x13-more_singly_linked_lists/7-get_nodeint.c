#include "lists.h"

/**
  * get_nodeint_at_index - Finds the nth node
  * @head: Pointer to the head of the list
  * @index: Index of node
  *
  * Return: nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}
