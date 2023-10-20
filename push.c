#include "monty.h"

/**
* Vpush - USED TO ADD NODE TO STACK
* @head: THE HEAD OF STACK
* @COUNTER: REPRESENTS THE LINE NUMBER.
* Return: NOTHING.
*/

void Vpush(stack_t **head, unsigned int COUNTER)
{

	int z, k = 0, FLG = 0;

	if (VAL.ARGM)
	{
		if (VAL.ARGM[0] == '-')
			k++;
		for (; VAL.ARGM[k] != '\0'; k++)
		{
			if (VAL.ARGM[k] > 57 || VAL.ARGM[k] < 48)
				FLG = 1; }
		if (FLG == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", COUNTER);
			fclose(VAL.MON_FILE);
			free(VAL.LIN_CONT);
			_FREEstack(*head);
			exit(EXIT_FAILURE);
		}
	}

	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", COUNTER);
		fclose(VAL.MON_FILE);
		free(VAL.LIN_CONT);
		_FREEstack(*head);
		exit(EXIT_FAILURE); }
	z = atoi(VAL.ARGM);
	if (VAL.FLAG_CHAN == 0)
		_ADDnode(head, z);
	else
		_ADDqueue(head, z);
}
