#ifndef MONTY
#define MONTY
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/*
 * Struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 * you can assume it will be used in a singly linked list
 * you can assume it will be used in a doubly linked list
 */

typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/*
 * Struct global_s - global variables
 * @arg: second parameter of the line number
 * @fp: file pointer
 * @input: input text
 * @lifo: is a stack (or queue)
 * Description: global variables
 * you can assume it will be used in a doubly linked list
 */
typedef struct global_s
{
    char *arg;
    FILE *fp;
    char *input;
    stack_t *lifo;
} global_t;

extern global_t global;

/*
 * Struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * you can assume it will be used
 * in a stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void _pint(stack_t **stack, unsigned int line_number);

#endif