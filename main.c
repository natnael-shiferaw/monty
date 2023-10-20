#include "monty.h"
#include <string.h>

/**
* main - USED AS MONTY CODE INTERPRETER.
* @argc: NUMBER OF ARGUMENTS
* @argv: REPRESENTS THE MONTY FILE LOCATION.
* Return: 0
*/

int main(int argc, char *argv[])
{
	VAL_T VAL;
	unsigned int COUNTER = 0;
	stack_t *stack = NULL;
	size_t SIZE = 0;
	FILE *MON_FILE;
	ssize_t READline = 1;
	char *LIN_CONT;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	MON_FILE = fopen(argv[1], "r");
	VAL.MON_FILE = MON_FILE;

	if (!MON_FILE)
	{
		fprintf(stderr, "Error: Can't open MON_FILE %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (READline > 0)
	{
		LIN_CONT = NULL;
		READline = getline(&LIN_CONT, &SIZE, MON_FILE);
		VAL.LIN_CONT = LIN_CONT;
		COUNTER++;
		if (READline > 0)
		{
			_EXeCUte(LIN_CONT, &stack, COUNTER, MON_FILE);
		}
		free(LIN_CONT);
	}
	_FREEstack(stack);
	fclose(MON_FILE);

	return (0);
}
