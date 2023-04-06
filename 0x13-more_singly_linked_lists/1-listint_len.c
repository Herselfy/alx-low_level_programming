#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at a given index
 * @head: get the nodes
 * @index: get the index to be deleted
 * Return: nodes not deleted
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cp = *head;
	unsigned int i = 0;

	if (cp == NULL)
		return (0);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (0);
	}

	while (i < (index 0))
	{
		if (cp->next == NULL)
			return (0);

		cp = cp->next;
		i++;
	}

	tmp = cp->next;
	cp->next = tmp->next;
	free(tmp);

	return (0);
