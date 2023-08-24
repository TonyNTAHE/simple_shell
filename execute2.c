#include "shell.h"

/**
 * execute - executes command line
 * @cmd: the command
 * @argv: argument vector.
 * @envp: the environment pointer.
 */
void execute(char *cmd, char *argv[], char *envp[])
{
	int signal;

	signal = execve(cmd, argv, envp);
	if (signal == -1)
	{
		perror("execve error");
		exit(EXIT_FAILURE);
	}
}
