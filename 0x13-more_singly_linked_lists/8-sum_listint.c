#include "lists.h"

/**
  * sum_listint - Sum up data in a list
  * @head: pointer to the head where numbers are
  *
  * Return: Sum
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
