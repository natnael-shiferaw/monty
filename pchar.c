#include "monty.h"

/**
* Vpchar - USED TO PRINT CHAR AT TOP OF STACK.
* @head: THE HEAD STACK.
* @counter: REPRESENTS LINE NUMBER.
* Return: NOTHING/VOID.
*/

void Vpchar(stack_t **head, unsigned int counter)
{
        VAL_T VAL;
	stack_t *H;

	H = *head;

	if (!H)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(VAL.MON_FILE);
		free(VAL.LIN_CONT);
		_FREEstack(*head);
		exit(EXIT_FAILURE);
	}

	if (H->n > 127 || H->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(VAL.MON_FILE);
		free(VAL.LIN_CONT);
		_FREEstack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", H->n);
}
