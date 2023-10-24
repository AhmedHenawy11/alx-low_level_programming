#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - inserting a node in the head of linked list
 * @head: passed head of linked list
 * @n: int
 * Return: the adress of the head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = (*head);
	(*head) = node;
	return (*head);
}
