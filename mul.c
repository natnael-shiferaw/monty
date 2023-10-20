#include "monty.h"

/**
* Vmult - PERFORMS MULTIPLICATION ON TOP TWO
*  - ELEMENTS OF THE STACK.
* @head: THE HEAD OF THE STACK.
* @counter: REPRESENTS THE LINE NUMBER.
* Return: NOTHING/VOID.
*/

void Vmult(stack_t **head, unsigned int counter)
{

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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(VAL.MON_FILE);
		free(VAL.LIN_CONT);
		_FREEstack(*head);
		exit(EXIT_FAILURE);
	}

	H = *head;
	AUX = H->next->n * H->n;
	H->next->n = AUX;
	*head = H->next;
	free(H);
}
