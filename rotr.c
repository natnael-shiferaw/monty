#include "monty.h"

/**
* Vrotr- ROTATES STACK TO BOTTOM
* @head: THE HEAD OF STACK.
* @COUNTER: REPRESENTS THE LINE NUMBER.
* Return: NOTHING/VOID.
*/

void Vrotr(stack_t **head, __attribute__((unused)) unsigned int COUNTER)
{

	stack_t *CPY;

	CPY = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	while (CPY->next)
	{
		CPY = CPY->next;
	}

	CPY->next = *head;
	CPY->prev->next = NULL;
	CPY->prev = NULL;
	(*head)->prev = CPY;
	(*head) = CPY;
}
