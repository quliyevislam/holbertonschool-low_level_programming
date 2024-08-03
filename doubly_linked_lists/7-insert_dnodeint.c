#include "lists.h"
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *temp = *h;
    dlistint_t *temp_2;
    unsigned int  i = 0;
    
    while (i < idx)
            temp = temp->next, i++;

    temp_2 = temp->prev;
    temp_2->next = add_dnodeint(&temp, n);
    (temp_2->next)->prev = temp_2;

    return (temp_2->next);
}

