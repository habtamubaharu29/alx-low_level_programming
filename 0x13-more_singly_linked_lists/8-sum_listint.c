#include "lists.h"
#include <stdlib.h>

/**
 * int sum_listint - Sum of all the data (n) in a list
 * @head: Address of the first node of the list
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
