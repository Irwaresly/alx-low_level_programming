#include "lists.h"

/**
 * reverse_listin - reverses a linked list
 * @head: pointer to 1st node
 *
 * Return: pointer to the 1st node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

while (*head)
{
	next = (*head)->next;
	(*head)->next = prev;
	prev = *head;
	*head = next;
}

*head = prev;

return (*head);
}