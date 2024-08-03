#include <stdlib.h>
#include "lists.h"


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{	
		*head = new_node;
	        (*head)->perv = NULL;
	}

	else 
	{
		dlistint_t *temp = *head;

		while (temp->next)	
			temp = temp->next;

		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
