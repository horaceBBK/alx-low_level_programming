#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @str: string to store
 *
 * Return: pointer to the new node, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
