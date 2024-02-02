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
 * @lifo: stack or queue
 * @line_number: line number
 * @arg: value
 * @head: doubly linked list
 * @fp: file
 * @input_text: input text
 * Description: global variables
 * you can assume it will be used
 */
typedef struct monty_s 
{
    int lifo;
    unsigned int line_number;
    char *arg;
    stack_t *head;
    FILE *fp;
    char *input_text;

} global_t;



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

extern global_t *global;

/* operation codes instructions */

void _pint(stack_t **double_stack, unsigned int the_line_number);

#endif