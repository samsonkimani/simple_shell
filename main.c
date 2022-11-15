#include "main.h"

/**
 * main - the shell entry point
 *
 * @ac: argument counter
 * @av: the main arguments
 *
 * Return: return 0 in success
 */

int main(int ac, char **av)
{
	data_shell datash;
	(void) ac;

	signal(SIGINT, get_sigint);
	set_data(&datash, av);
	shell_loop(&datash);
	free_data(&datash);
	if (datash.status < 0)
		return (255);
	return (datash.status);
}

/**
 * set_data - initialize the datastructures
 * @datash: data structure
 * @av: the arguments
 * Return: nothing
 */

void set_data(data_shell *datash, char **av)
{
	unsigned int i;

	datash->av = av;
	datash->input = NULL;
	datash->args = NULL;
	datash->status = 0;
	datash->counter = 1;

	for (i = 0; environ[i]; i++)
		;
	datash->_environ = malloc(sizeof(char *) * (i + 1));

	for (i = 0; environ[i]; i++)
	{
		datash->_environ[i] = _strdup(environ[i]);
	}
	datash->_environ[i] = NULL;
	datash->pid = aux_itoa(getpid());
}

/**
 * free_data - free the set data structure
 * @datash: datastructures
 * @av: arguments
 * Return: nothing
 */

void free_data(data_shell *datash, char **av)
{
	unsigned int i;

	for (i = 0; datash->_environ[i]; i++)
	{
		free(datash->_environ[i]);
	}

	free(datash->_environ);
	free(datash->pid);
}
