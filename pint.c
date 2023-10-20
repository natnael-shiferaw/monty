#include "monty.h"

/**
* Vpint - USED TO PRINT THE TOP.
* @head: THE HEAD OF THE STACK.
* @COUNTER: REPRESENTS THE LINE NUMBER.
* Return: NOTHING.
*/

void Vpint(stack_t **head, unsigned int COUNTER)
{

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", COUNTER);
		fclose(VAL.MON_FILE);
		free(VAL.LIN_CONT);
		_FREEstack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
