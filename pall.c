#include "monty.h"
/**
 * pall - prints all the elements of a stack
 * @stack: the stack being pushed to
 * @line_number: the current line in the file
 * Return: void
*/
void pall(stack_t **stack, unsigned int line_number)
{
        stack_t *node = *stack;

        (void)line_number;

        while (node != NULL)
        {
                printf("%d\n", node->n); /*print val of node, newline*/
                node = node->next; /*move to the next node*/
        }
}