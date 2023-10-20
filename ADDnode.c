#include "monty.h"

/**
* _ADDnode - USED TO ADD NODE TO HEAD STACK.
* @head: REPRESENTS THE HEAD STACK
* @n: REPRESENTS A NEW VALUE.
* Return: NOTHING/VOID.
*/

void _ADDnode(stack_t **head, int n)
{

	stack_t *NEWnode, *AUX;

	AUX = *head;
	NEWnode = malloc(sizeof(stack_t));

	if (NEWnode == NULL)
	{ printf("Error\n");
		exit(0);
	}

	if (AUX)
		AUX->prev = NEWnode;
	NEWnode->n = n;
	NEWnode->next = *head;
	NEWnode->prev = NULL;
	*head = NEWnode;
}

