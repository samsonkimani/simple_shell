# simple shell group project
## --- THIS IS AN ALX GROUP PROJECT --

AUTHORS: zainab ibrahim && samson kimani

-aux_error1.c - catering for error nor=t found, path , cd and exit shell
-aux_error2.c - error mesage for path and denied permissions
-aux_help2.c - this file contains more aux help for builtins and alias
-aux_help.c - this file contains aux help for environment variables

-aux_lists2.c - a function that adds variables at the end of a r_var list and also frees the r_var list

-adding_free_list.c - the file contains functions for adding separators found at the end of a sep_list, free the sep_list, add a command at the end of a line list and free the line list

-helper_function2.c- this file contains helper functions such as memcopy, reallocdp{reallocate memory for a double pointer}

-aux_stdlib.c - this file contains the get_len{gets the length of a number}, aux_itoa{convertts integers to a string], _itoa[converts a string to a number}

-helper_functions1.c - this file contains helper functions  sdtdup, strlen ,comp_char used in the project.

-helper_function_rev_string.c - this file contains only the reverse string function used to reverse a string

-helper_functions.c - this file contains the main helper function such as the strcmp, strcpy, strchr and the strspn.

-cd.c - this file contains functions that are used with the cd commands.

-cd_shell.c - the function that changes the current working directory

-check_syntax_error.c - a function to check the syntax errors of the passed data.

-cmd_exec.c - this file contains the is_cdir to check if it is in the current directory and the _which to locate agiven command, is_command checks if the command is executabale.

-env1.c - a file that contains variables used to : compare variable names, get the environment variables and printing the environment variable

-env2.c - a file that contains functions to set environment variables, compare environment variables and unsets environment variables

-exec.c- the file contains the exec_line function that finds builtin commands and executes them

-exit_shell.c - a function to exit the shell

-get_builtin.c - this file contains a struct array that executes the built in commands ;

-get_error.c - gets the errors according to the built in sysntax or permissions

-getline.c - gets the commands passed using the standatd library
get_help.c - function that retrieves error messages based on the builtin function

-get_sigint.c - handle the ctr + c call in the prompt

-main.c - this is the main loop/ the entry point of the loop. the main function call the set data function to set the data and the free function to free the set data once done with. function include free data and set data

-main.h - this is the main header file containing all the function prototypes and the structures.

-man_1_simple_shell
readline.c - this file contains the function read_line that reads line from the input

-replace_variable.c- this file mainly contains function that works with the typed variables , the check_env function checks if the passed variable is an environment varible, the check_var checks if the passed variables are $$ of $, the replaced_input replaces the string into variables 
 
-shell_loop.c- this file contains the main loop of the shell. it also contains the *without comment function that removes comments fromm the input
split_swaap.c- this file contains a swap character function that spaps the | and the & symbols with a non-print cahracters, it also contains functions such as the add nodes that adds separators and command lines in their respective lists. the function go-next is also in this file. this enables one to go to the next command line stored. the main command in this file is the split command that enables one to split commands based on the separators and execute them
