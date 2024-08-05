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
        int temp; /*stores the value of the node1*/

        if (!(*stack) || !(*stack)->next)
        {
                fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
                exit(EXIT_FAILURE);
        }
        node1 = *stack; /*top element of the stack*/
        node2 = (*stack)->next; /*next element of the stack*/
        temp = node1->n; /*store node1 val in temp*/
        node1->n = node2->n; /*replace node1 val with node 2 val*/
        node2->n = temp; /*replace node 2 val with temp val*/
}
