#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @stack: the stack where elements are being added to
 * @line_number: the current lline number of the file
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
        stack_t *node1;
        stack_t *node2;

        if (!*stack || !(*stack)->next)
        {
                fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
                exit(EXIT_FAILURE);
        }
        node1 = *stack;
        node2 = (*stack)->next;

        node2->n += node1->n;
}