#include "lists.h"
/**
 * list_len - returns the number of elements in a linked `list_t` list.
 * @h: address of the head of the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int number_of_elements = 0;

	while (h)
	{
		number_of_elements++;
		h = h->next;
	}

	return (number_of_elements);
}
