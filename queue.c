#include "monty.h"

/**
* Vqueue - USED TO PRINT THE TOP.
* @head: THE HEAD OF STACK.
* @COUNTER: REPRESENTS THE LINE NUMBER.
* Return: NOTHING.
*/

void Vqueue(stack_t **head, unsigned int COUNTER)
{

	VAL.FLAG_CHAN = 1;
	(void)head;
	(void)COUNTER;
}

/**
* _ADDqueue - USED TO ADD NODE TO TAIL STACK.
* @n: REPRESENTS NEW VALUE.
* @head: THE HEAD OF STACK.
* Return: NOTHING.
*/

void _ADDqueue(stack_t **head, int n)
{

	stack_t *NEWnode, *AUX;

	AUX = *head;
	NEWnode = malloc(sizeof(stack_t));

	if (NEWnode == NULL)
	{
		printf("Error\n");
	}

	NEWnode->n = n;
	NEWnode->next = NULL;

	if (AUX)
	{
		while (AUX->next)
			AUX = AUX->next;
	}

	if (!AUX)
	{
		*head = NEWnode;
		NEWnode->prev = NULL;
	}
	else
	{
		AUX->next = NEWnode;
		NEWnode->prev = AUX;
	}
}
