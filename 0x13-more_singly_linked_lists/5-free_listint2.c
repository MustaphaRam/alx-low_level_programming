#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head_node == NULL)
		return;

	while (*head_node)
	{
		temp_node = (*head_node)->next;
		free(*head_node);
		*head_node = temp_node;
	}

	*head_node = NULL;
}

