#include <stdlib.h>
#include "lists.h"





dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

dlistint_t *new_node;
dlistint_t *temp = *h;

unsigned int i = 0;

if (!idx)
        return (add_dnodeint(&temp, n));

while (i < idx-1)
{
	temp = temp->next, i++;

	if (!temp)
		return (NULL);
}

if (!(temp->next))	
	return (add_dnodeint_end(&temp, n));

new_node = malloc(sizeof(dlistint_t));

if (!new_node)
	return (NULL);

new_node->n = n;
new_node->next = temp->next;
new_node->prev = temp;

(temp->next)->prev = new_node;
temp->next = new_node;

	return (new_node);
}
