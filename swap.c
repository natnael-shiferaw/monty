#include "monty.h"

/**
* Vswap - PERFORMS SWAP ON TOP TWO
*  ELEMENTS OF STACK
* @head: THE HEAD OF STACK
* @COUNTER: REPRESENTS THE LINE NUMBER.
* Return: NOTHING/VOID
*/

void Vswap(stack_t **head, unsigned int COUNTER)
{
        VAL_T VAL;
	int LEN = 0, AUX;
	stack_t *H;

	H = *head;

	while (H)
	{
		H = H->next;
		LEN++;
	}

	if (LEN < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", COUNTER);
		fclose(VAL.MON_FILE);
		free(VAL.LIN_CONT);
		_FREEstack(*head);
		exit(EXIT_FAILURE);
	}

	H = *head;
	AUX = H->n;
	H->n = H->next->n;
	H->next->n = AUX;
}
