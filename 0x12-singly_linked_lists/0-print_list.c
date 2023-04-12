#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list
 * @h: pointer to head of list
 *
 * Return: number of nodes in list.
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t n;	/*number of nodes*/

	current = h;
	n = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);
		current = current->next;
		n++;
	}
	return (n);
}
