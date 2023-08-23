#include "monty.h"

/**
 *
 */
int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 *
 */
int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 *
 */
int fopen_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 *
 */
int unknown_op_error(char *filename, unsigned int line_number)
{
	fprintf(stderr, "L%s: unknown instruction %s\n", filename, line_number);
	return (EXIT_FAILURE);
}

/**
 *
 */
int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%s: usage: push integer", line_number);
	return (EXIT_FAILURE);
}
