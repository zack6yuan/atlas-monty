#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @stack: the stack where the element is beign removed
 * @line_number: the current line of the file
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
        stack_t *node;

        if (!*stack) /*checks if the stack is empty*/
        {
                fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
                exit(EXIT_FAILURE);
        }
        node = *stack; /*top element of stack to node ptr*/
        *stack = (*stack)->next; /*update to next*/

        if (*stack) /*checks if stack is empty*/
        {
                (*stack)->prev = NULL; /*set prev to NULL*/
        }
        free(node); /*free the memory allocated*/
}
