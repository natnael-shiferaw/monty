#include "monty.h"

/**
* Vdiv - USED TO DIVIVE TOP TWO ELEMENTS OF STACK.
* @head: HEAD STACK
* @COUNTER: REPRESENTS LINE NUMBER.
* Return: NOTHING/VOID.
*/

void Vdiv(stack_t **head, unsigned int COUNTER)
{
	int LEN = 0, AUX;
	VAL_T VAL;
	stack_t *H;

	H = *head;

	while (H)
	{
		H = H->next;
		LEN++;
	}

	if (LEN < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", COUNTER);
		fclose(VAL.MON_FILE);
		free(VAL.LIN_CONT);
		_FREEstack(*head);
		exit(EXIT_FAILURE);
	}

	H = *head;
	if (H->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", COUNTER);
		fclose(VAL.MON_FILE);
		free(VAL.LIN_CONT);
		_FREEstack(*head);
		exit(EXIT_FAILURE);
	}

	AUX = H->next->n / H->n;
	H->next->n = AUX;
	*head = H->next;
	free(H);
}
