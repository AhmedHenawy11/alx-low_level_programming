#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t list_len(const listint_t *h);
listint_t *add_node(listint_t **head, const char *str);
listint_t *add_node_end(listint_t **head, const char *str);
void free_list(listint_t *head);

#endif
