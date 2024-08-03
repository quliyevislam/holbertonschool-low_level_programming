#include "lists.h"
#include <stdlib.h>
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int i = 0;

    if (idx == 0)
        return add_dnodeint(h, n);

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return NULL;

    new_node->n = n;

    while (temp && i < idx - 1) {
        temp = temp->next;
        i++;
    }

    if (!temp)
        return NULL;

    new_node->next = temp->next;
    new_node->prev = temp;

    if (temp->next)
        temp->next->prev = new_node;

    temp->next = new_node;

    return new_node;
}
