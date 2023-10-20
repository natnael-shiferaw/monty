#include "monty.h"

/**
* Vmod - PERFORMS DIVISION ON TOP STACK ELEMENTS.
* @head: THE HEAD OF STACK
* @counter: REPRESENTS THE LINE NUMBER.
* Return: NOTHING/VOID.
*/

void Vmod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(VAL.MON_FILE);
		free(VAL.LIN_CONT);
		_FREEstack(*head);
		exit(EXIT_FAILURE);
	}

	H = *head;

	if (H->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(VAL.MON_FILE);
		free(VAL.LIN_CONT);
		_FREEstack(*head);
		exit(EXIT_FAILURE);
	}

	AUX = H->next->n % H->n;
	H->next->n = AUX;
	*head = H->next;
	free(H);
}
