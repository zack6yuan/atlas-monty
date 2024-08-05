#include "monty.h"
/**
 * push - pushes an element to the stack
 * @stack: the stack being pushed to
 * @line_number: the current line in the file
 * Return: void
*/
void push(stack_t **stack, unsigned int line_number, int n)
{
        stack_t *node = *stack;
        node = malloc(sizeof(stack_t));

        if (!new) /*checks if malloc failed*/
        {
                fprintf(stderr, "Error: malloc failed\n");
                exit(EXIT_FAILURE);
        }

        node->prev = NULL; /*set prev to NULL*/
        node->n = n; /*set valuie of new node to n */
        node->next = *stack; /*set to the head*/
        if (*stack)
        {
                (*stack)->prev = node;
        }
        *stack = node;
}