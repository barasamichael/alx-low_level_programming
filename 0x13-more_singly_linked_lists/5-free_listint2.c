#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - frees memory allocated to linked list
  * and assign value 0 to head
  * @head: first node of linked list
  *
  * Return: nothing
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
