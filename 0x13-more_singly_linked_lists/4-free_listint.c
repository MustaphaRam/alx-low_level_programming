#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head_node)
	{
		temp_node = head_node->next;
		free(head_node);
		head_node = temp_node;
	}
}
