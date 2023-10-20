#include "monty.h"

/**
* _FREEstack - USED TO FREE A DOUBLY LINKED LIST.
* @head: REPRESENTS THE HEAD OF STACK.
*/

void _FREEstack(stack_t *head)
{
	stack_t *AUX;

	AUX = head;

	while (head)
	{
		AUX = head->next;
		free(head);
		head = AUX;
	}

}
