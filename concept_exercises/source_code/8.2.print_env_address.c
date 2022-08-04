#include <unistd.h>
#include <stdio.h>

/**
 * main - is a function
 * @ac: first argument
 * @av: second argument
 * @env: third argument
 * Return: Always 0
 */

int main(int ac, char **av, char **env)
{
	extern char **environ;
	unsigned int x = 0;

	(void)ac;
	(void)av;
	if (env[x] != NULL && environ[x] != NULL)
	{
		printf("env address: %p\n", &(**env));
		printf("environ address: %p\n", &(**environ));
		x++;
	}

	return (0);
}
