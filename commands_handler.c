#include "shell.h"

/**
 * get_args - function that gets arguments from the standard input
 * @line: the string input
 * @last_ret - the return value of the last executed command
 *
 * Return: a pointer to the stored command
 *        0, otherwise
 */
int *get_args(char *line, int *last_ret)
{
	size_t n = 0;
	ssize_t line_read;

	line_read = _getline(&line, &n, STDIN_FILENO);
	if (line_read == -1)
		return (0);
	line[line_read - 1] = '\0';
	return (line);
}

/**
 * exec_args - function
 * @commands: array of commands
 * @parameters: array of commands
 * @last_ret: the return value of the last executed command
 *
 * Return: the return value of the last executed command
 */
int exec_args(char **commands, char **parameters, int *last_ret)
{
	int ret;

	ret = exec2_args(commands, parameters, last_ret);
	return (ret);
}

/**
 * exec2_args - fucntion that calls the execution of a command
 * @commands: array of commands
 * @parameters: array of commands
 * @last_ret: the return value of the last executed command
 *
 * Return: the return value of the last executed command
 */
int exec2_args(char **commands, char **parameters, int *last_ret)
{
	int ret;

	ret = execute(commands, parameters);

	return (ret);
}
/**
 * control_args - function that calls other function to read and execute the commands
 * @last_ret - the return value of the last executed command
 *
 * Return: EOF, if it is the end of a file
 *         0, if the line can not be tokenized
 *         otherwise the return value of the last executed command
 */
int control_args(int *last_ret)
{
	int ret = 0;
	char **commands, **parameters, *line;

	ret = get_args(line, last_ret);

	if (line == NULL)
		return (EOF);
	commands = _strtok(line, " ");
	parameters = commands;

	if (commands == NULL)
		return (0);
	ret = exec_args(commands, parameters, last_ret);
	return (ret);
}
