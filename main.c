#include "monty.h"
/** 
 * main - Monty
 * @argc: argument count
 * @argv: argument array
 * Return: success or failure
*/
int main(int argc, char *argv[])
{
        FILE *file; /*pointer to the file*/
        unsigned int line_number = 0; /*current line number*/
        char *arg = NULL; /*stores opcode args*/
        size_t line_len = 0; /*stores lines read*/
        char *opcode;
        stack_t *stack = NULL; /*ptr to head of stack*/
        ssize_t read; /*used with getline function*/

        if (argc != 2) /*checks if number or arguments != 2*/
        {
                fprintf(stderr, "USAGE: monty file\n"); /*error message*/
                exit(EXIT_FAILURE); /*exit*/
        }
        file = fopen(argv[1], "r"); /*open for reading*/
        if (!file) /*if the file can't be opened*/
        {
                fprintf(stderr, "Error: Can't open file %s\n", argv[1]); /*error message*/
                exit(EXIT_FAILURE); /*exit*/
        }
        while ((read = getline(&arg, &line_len, file)) != -1) /*reads line using getline*/
        {
                line_number++; /*increment*/
                opcode = strtok(arg, " \t\n"); /*use strtok to tokenize*/
                if (!opcode || opcode[0] == '#') /*if !opcode or comment*/
                {
                        continue;
                }
                exec_instruct(opcode, &stack, line_number); /*call exec_intrstruct to execute*/
        }
        free(arg); /*free memory allocated for arg*/
        fclose(file); /*close the file*/
        free_stack(stack); /*free the stack*/
        return (EXIT_SUCCESS); /*exit with success!*/
}
