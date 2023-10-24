#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - inserting a node in the head of linked list
 * @head: passed head of linked list
 * @str: passed string of each node
 * Return: the adress of the head.
 */

list_t *add_node(list_t **head, const char *str)
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
	node->next = (*head);
	(*head) = node;
	return (*head);
}
