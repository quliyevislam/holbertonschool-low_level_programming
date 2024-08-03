#include "lists.h"
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *temp_next = *h;
    dlistint_t *temp_prev;
    unsigned int  i = 0;

    if (!idx)
        return(add_dnodeint(h, n));
    
    
    while (i < idx && temp_next)
            temp_next = temp_next->next, i++;

    if (!temp_next)
        return (NULL);
    
    temp_prev = temp_next->prev;    
    
    if (!temp_prev)
        return (add_dnodeint(&temp_next, n));

    temp_prev->next = add_dnodeint(&temp_next, n);
    (temp_prev->next)->prev = temp_prev;
    
    return (temp_prev->next);
}
