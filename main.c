#include "shell.h"

/**
 * execute - function that executes a command
 * @commands: an array of commands
 * @parameters: an array of commands
 *
 * Return: the value of the last executed command or an error message if an error occurs
 */
int execute(char **commands, char **parameters)
{
	pid_t child_pid;
	char *command = commands[0];

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid == 0)
	{
		execve(command, parameters, environ);
		_EXIT(ret);
	}
	else
	{
		wait(&status);
	}
}

/**
 * main - simple shell
 * @ac: number of arguments
 * @av: array of pointers to the arguments
 *
 * Return: the return value of the last executed program
 */
int main(int ac, char **av)
{
	int ret;
	int *last_ret = &ret;

	signal(SIGINT, signal_handler);

	while (1)
	{
		write(STDOUT_FILENO, "$", 2);
		ret = control_args(last_ret);
		if (ret == EOF || EXIT)
		{
			if (ret == EOF)
				write(STDOUT_FILENO, "\n", 1);
			exit(*last_ret);
		}
	}
	return (0);
}
