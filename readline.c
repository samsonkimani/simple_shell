#include "main.h"

/**
 * read_line - reads the input string
 *
 * @i_eof: the return value of the getline function
 * Return: the input string
 */

char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t buffer_size = 0;

	*i_eof = getline(&input, &buffer_size, stdin);

	return (input);
}
