#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - inserting a node at the end of linked list
 * @head: passed head of linked list
 * @str: passed string of each node
 * Return: the adress of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	unsigned int i = 0;

	while (str[i])
		i++;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	list_t *last_node = *head;

	while (last_node->next != NULL)
	{
	last_node = last_node->next;
	}
	last_node->next = node;

	return (node);
}
