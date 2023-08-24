#include "shell.h"
/**
 * env - print the enivornment.
 *
 * Return: nothing.
 */
void env(void)
{
	while (*environ)
	{
		printf("%s\n", *environ);
		environ++;
	}
}

/**
 * cd - change directory.
 * @args: the argument.
 * Return: 1 on success or 0 on failure.
 */
int cd(char **args)
{
	int signal = chdir(args[1]);

	if (signal == -1)
	{
		perror("./hsh");
		return (0);
	}
	return (1);
}
