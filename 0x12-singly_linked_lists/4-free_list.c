#include "lists.h"
#include <stdio.h>

/**
 * free_list - Frees a list.
 * @head: A pointer to the list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
