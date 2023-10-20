#include "monty.h"

/**
* Vsub- PERFORMS SUBSTRACTION.
* @head: THE HEAD OF STACK
* @COUNTER: REPRESENTS THE LINE NUMBER
* Return: NOTHING.
*/

void Vsub(stack_t **head, unsigned int COUNTER)
{

	int VAr, NODE;
	stack_t *AUX;

	AUX = *head;

	for (NODE = 0; AUX != NULL; NODE++)
		AUX = AUX->next;

	if (NODE < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", COUNTER);
		fclose(VAL.MON_FILE);
		free(VAL.LIN_CONT);
		_FREEstack(*head);
		exit(EXIT_FAILURE);
	}

	AUX = *head;
	VAr = AUX->next->n - AUX->n;
	AUX->next->n = VAr;
	*head = AUX->next;
	free(AUX);
}
