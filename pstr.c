#include "monty.h"

/**
* Vpstr - USED TO PRINT STRING THAT STARTS AT TOP
* @head: THE HEAD OF STACK.
* @COUNTER: REPRESENTS THE LINE NUMBER.
* Return: NOTHING/VOID
*/

void Vpstr(stack_t **head, unsigned int COUNTER)
{

	(void)COUNTER;
	stack_t *H;

	H = *head;

	while (H)
	{
		if (H->n > 127 || H->n <= 0)
		{
			break;
		}
		printf("%c", H->n);
		H = H->next;
	}

	printf("\n");
}
