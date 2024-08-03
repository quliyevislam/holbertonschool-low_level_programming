#include "lists.h"
#include <stdlib.h>
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int i = 0;

    if (!idx)
        return add_dnodeint(h, n);



    while (temp && i < idx) {
        temp = temp->next;
        i++;
    }

    if (!temp)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    
    if (!new_node)
	    return(NULL);

    new_node->n = n;
    new_node->next = temp;
    new_node->prev = temp->prev;
	
    temp->prev = new_node;
    
    if (new_node->prev)
	    (new_node->prev)->next = new_node;


    return new_node;
}
