#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: address of the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{

	unsigned int number_of_nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		number_of_nodes++;
	}

	return (number_of_nodes);
}
