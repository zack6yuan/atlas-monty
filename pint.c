#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @stack: points to the head of the stack
 * @line_number: the current line number in the file
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
        if (!*stack)
        {
                fprintf(stderr, "L%u: can't pint, stack empty", line_number);
                exit(EXIT_FAILURE);
        }
}