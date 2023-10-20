#include "monty.h"

/**
* Vpall - USED TO PRINT THE STACK.
* @head: THE HEAD OF THE STACK.
* @COUNTER: JUST A VOID FUNCTION.
* Return: NOTHING/VOID.
*/

void Vpall(stack_t **head, unsigned int COUNTER)
{
(void)COUNTER;
stack_t *H;

H = *head;

if (H == NULL)
   return;

while (H)
{
printf("%d\n", H->n);
H = H->next;
}

}
