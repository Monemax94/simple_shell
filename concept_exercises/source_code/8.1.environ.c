#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - is a function
 *
 * Return: Always 0
 */
int main(void)
{
	extern char **environ;
	int x = 0;

	while (environ[x])
	{
		printf("%s\n", environ[x++]);
	}

	return (0);
}
