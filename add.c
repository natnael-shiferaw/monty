#include "monty.h"

/**
* Vadd - USED TO ADD TOP TWO ELEMENTS OF STACK.
* @head: REPRESENTS THE STACK HEAD.
* @counter: IS THE LINE NUMBER.
* Return: NOTHING/VOID.
*/

void Vadd(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(VAL.MON_FILE);
		free(VAL.LIN_CONT);
		_FREEstack(*head);
		exit(EXIT_FAILURE);
	}

	H = *head;
	AUX = H->n + H->next->n;
	H->next->n = AUX;
	*head = H->next;
	free(H);
}
