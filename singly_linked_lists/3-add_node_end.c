#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 * @str: the input string to be measured
 *
 * Return: the length of the input string
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * add_node_end - adds a new node at the end of a `list_t` list
 * @head: pointer to the head pointer of the list
 * @str: string of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (!*head)
		*head = new_node;

	else
	{
		list_t *temp = *head;

		while (temp->next)
			temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}
