#include <stdlib.h>
#inlude "lists.h"

/**
 * free_list - frees a linked list
 * @head: A pointer to the list_tlist
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