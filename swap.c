#include "monty.h"
/**
 * swap - swaps the top two elements of a stack
 * @stack: stack where the elements are being swapped
 * @line_number: current line in file
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
        stack_t *node1;
        stack_t *node2;

        if (!(*stack) || !(*stack)->next)
        {
                fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
                exit(EXIT_FAILURE);
        }
}