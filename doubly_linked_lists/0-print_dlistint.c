#include <stdio.h>
#include "main.h"

/**
 * print_dlistint - prints all the elements of a `dlistint_t` list
 * @h: address of the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	unsigned int  number_of_nodes = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		number_of_nodes++;
	}

	return (number_of_nodes);
}
