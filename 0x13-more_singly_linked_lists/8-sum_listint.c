#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data
 * @head: 1st node in the linked list
 *
 * Return: the sum resulting, if list is emoty return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

