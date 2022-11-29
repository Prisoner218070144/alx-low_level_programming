#include "lists.h"

/**
  * pop_listint - Delets a head node
  * @head: Pointer to a pointer of the head of the list
  *
  * Return: Delted head data
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
