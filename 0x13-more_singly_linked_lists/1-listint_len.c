#include <stdio.h>
#include "lists.h"

/**
  * listint_len - Counts elements in linked list
  * @h: The head
  *
  * Return: The number of elements
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}

	return (count);
}
