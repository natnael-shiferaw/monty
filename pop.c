#include "monty.h"

/**
* Vpop - IS A FUCNTION USED FOR pop.
* @head: THE HEAD OF STACK
* @counter: REPRESENTS THE LINE NUMBER.
* Return: NOTHING.
*/

void Vpop(stack_t **head, unsigned int counter)
{
        VAL_T VAL;
	stack_t *H;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(VAL.MON_FILE);
		free(VAL.LIN_CONT);
		_FREEstack(*head);
		exit(EXIT_FAILURE);
	}

	H = *head;
	*head = H->next;
	free(H);
}
