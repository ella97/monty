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
stack_t *new;

if (*stack == NULL)
{
    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    new->n = line_number;
    new->next = NULL;
    new->prev = NULL;
    *stack = new;
}
else
{
    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    new->n = line_number;
    new->next = *stack;
    new->prev = NULL;
    (*stack)->prev = new;
    *stack = new;
}
}

/**
* _pall - prints all the elements of the stack
* @stack: stack
* @line_number: line number
* Return: void
* you can assume it will be used in a doubly linked list
*/

void _pall(stack_t **stack, unsigned int line_number)
{
stack_t *temp;

temp = *stack;
while (temp != NULL)
{
    printf("%d\n", temp->n);
    temp = temp->next;
}
}
