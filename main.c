#include "monty.h"

global_t *global;

/**
 * free_global - free global
 * Return: void
 */

void free_global(void)
{
    free(global);
}