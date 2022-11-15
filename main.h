#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <limits.h>

#define BUFSIZE 1024
#define TOK_BUFSIZE 128
#define TOK_DELIM " \t\r\n\a"

/*extern points to an array of pointers to string called the "environment" */

extern char **environ;

/**
 * struct data - a structure that contains all relevant data on runtime
 * @av: the argument vectors
 * @input: commands written by the user
 * @args: token of the command line
 * @status: last status of the shell
 * @counter: the line counter
 * @_environ: the environment variables
 * @pid: the process id
 */

typedef struct data
{
	char **av;
	char *input;
	char **args;
	int status;
	int counter;
	char **_environ;
	char *pid;
} data_shell;


/**
 * struct sep_list_s - single linked list
 * @separator: ; | &
 * @next: next node
 * Description: this is a single linke dlist used to store separators
 */

typedef struct sep_list_s
{
	char separator;
	struct sep_list_s *next;
} sep_list;

/**
 * struct line_list_s - linked list used to store commands
 * @line: commands
 * @next: the next node in the command line
 */

typedef struct line_list_s
{
	char *line;
	struct line_list_s *next;
} line_list;

/**
 * struct r_var_list - singlle linked list used to store variables
 * @len_var: length of the variables
 * @val: the value of the variable
 * @len_val: the length of the value
 * @next: the next node
 */

typedef struct r_val_list
{
	int len_var;
	char *val;
	int len_val;
	struct r_var_list *next;
} r_var;

/**
 * struct builtin_s - for built in commands args
 * @name: the name of the builtin command
 * @f: the function pointer
 */

typedef struct builtin_s
{
	char *name;
	int (*f)(data_shell *datash);
} builtin_t;


void free_data(data_shell *datash);
void set_data(data_shell *datash, char **av);
char *without_comment(char *in);
void shell_loop(data_shell *datash);
char *read_line(int *i_eof);

#endif
