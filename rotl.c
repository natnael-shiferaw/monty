#include "monty.h"

/**
* Vrotl- USED TO ROTATE STACK TO TOP
* @head: THE HEAD OF STACK
* @COUNTER: REPRESENTS LINE NUMBER.
* Return: NOTHING/VOID.
*/

void Vrotl(stack_t **head,  __attribute__((unused)) unsigned int COUNTER)
{

	stack_t *TEMP = *head, *AUX;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	AUX = (*head)->next;
	AUX->prev = NULL;

	while (TEMP->next != NULL)
	{
		TEMP = TEMP->next;
	}

	TEMP->next = *head;
	(*head)->next = NULL;
	(*head)->prev = TEMP;
	(*head) = AUX;
}
