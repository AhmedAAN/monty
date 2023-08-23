#include "monty.h"

/**
 * f_pall - prints all the values on the stack
 * head: the head of the stack
 */
void f_pall(stack_t **head)
{
	stack_t *h;

	h = *head;
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
