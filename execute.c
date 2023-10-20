#include "monty.h"

/**
* _EXeCUte - USED TO EXECUTE THE OPCODE.
* @stack: REPRESENTS THE STACK
* @counter: REPRESENTS THE LINE NUMBER.
* @MON_FILE: IS A POINTER TO A MONTY FILE
* @LIN_CONT: REPRESENTS A LINE COUNT
* Return: NOTHING/VOID
*/
int _EXeCUte(char *LIN_CONT, stack_t **stack, unsigned int counter, FILE *MON_FILE)
{
	VAL_T VAL;
instruction_t opst[] = {
		{"push", Vpush}, {"pall", Vpall}, {"pint", Vpint},
		{"pop", Vpop},
		{"swap", Vswap},
		{"add", Vadd},
		{"nop", Vnop},
		{"sub", Vsub},
		{"div", Vdiv},
		{"mul", Vmult},
		{"mod", Vmod},
		{"pchar", Vpchar},
		{"pstr", Vpstr},
		{"rotl", Vrotl},
		{"rotr", Vrotr},
		{"queue", Vqueue},
		{"stack", Vstack},
		{NULL, NULL}
	};
	char *OP;
	unsigned int j = 0;

	OP = strtok(LIN_CONT, " \n\t");
	if (OP && OP[0] == '#')
		return (0);
	VAL.ARGM = strtok(NULL, " \n\t");
	while (opst[j].opcode && OP)
	{
		if (strcmp(OP, opst[j].opcode) == 0)
		{opst[j].f(stack, counter);
			return (0);
		}
		j++;
	}
	if (OP && opst[j].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, OP);
		fclose(MON_FILE);
		free(LIN_CONT);
		_FREEstack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
