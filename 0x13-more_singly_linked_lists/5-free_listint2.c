#include "lists.h"

/**
  * free_listint2 - Frees list memory
  * @head: Pointer to a pointer of the head of the list
  *
  * Return: Nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
