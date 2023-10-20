#ifndef MONTY_H
#define MONTY_H

#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

/*Data structure*/

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO Holberton project
*/

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/*Data structure*/

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO Holberton project
*/

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct VAL_S - A STRUCT FOR VAR, DIFF VALUES.
* @ARGM: REPRESENTS A VALUE
* @MON_FILE: REPRESENT A POINTER TO MONTY FILE.
* @LIN_CONT: REPRESENTS A LINE CONTENT
* @FLAG_CHAN: REPRESENTS A FLAG CHANGE.
* Description: USED FOR CARRYING VALUES.
*/
typedef struct VAL_S
{
	char *ARGM;
	FILE *MON_FILE;
	char *LIN_CONT;
	int FLAG_CHAN;
}  VAL_T;

extern VAL_T VAL;


void Vsub(stack_t **head, unsigned int COUNTER);
void Vadd(stack_t **head, unsigned int COUNTER);
void Vdiv(stack_t **head, unsigned int COUNTER);
void Vmult(stack_t **head, unsigned int COUNTER);
void Vmod(stack_t **head, unsigned int COUNTER);


char *_ReALLoc(char *PTR, unsigned int old_size, unsigned int new_size);
int _EXeCUte(char *LIN_CONT, stack_t **head, unsigned int COUNTER, FILE *MON_FILE);
ssize_t _GetSTDin(char **lineptr, int MON_FILE);
char  *_CLEANline(char *LIN_CONT);
void _FREEstack(stack_t *head);

void Vpush(stack_t **head, unsigned int number);
void Vpall(stack_t **head, unsigned int number);
void Vpint(stack_t **head, unsigned int number);
void Vpop(stack_t **head, unsigned int COUNTER);
void Vswap(stack_t **head, unsigned int COUNTER);
void Vnop(stack_t **head, unsigned int COUNTER);
void Vpchar(stack_t **head, unsigned int COUNTER);
void Vpstr(stack_t **head, unsigned int COUNTER);
void Vrotl(stack_t **head, unsigned int COUNTER);
void Vrotr(stack_t **head, __attribute__((unused)) unsigned int COUNTER);
void Vqueue(stack_t **head, unsigned int COUNTER);
void Vstack(stack_t **head, unsigned int COUNTER);


void _ADDnode(stack_t **head, int n);
void _ADDqueue(stack_t **head, int n);

#endif
