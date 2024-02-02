#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @stack: stack
 * @line_number: line number
 * Return: void
 * you can assume it will be used in a doubly linked list
 */

void _push(stack_t **stack, unsigned int line_number)
{
int a, b;
if(!global.arg){
fprintf(2, "L%d: usage: push integer\n", line_number);
free_global();
exit(EXIT_FAILURE);
}
for (a = 0; global.arg[a] != '\0'; a++)
if (isdigit(global.arg[a]) == 0)
{
fprintf(2, "L%d: usage: push integer\n", line_number);
free_global();
exit(EXIT_FAILURE);
}
b = atoi(global.arg);
push(stack, b);
}
}
