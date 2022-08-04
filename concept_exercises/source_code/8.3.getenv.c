#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * _getenv - is a function that gets an environment variable
 * @name: variable name
 * Return: Always NULL
 */

char *_getenv(const char *name)
{
	int index, length;
	extern char **environ;

	length = strlen(name);
	for (index = 0; environ[index]; index++)
	{
		if (strncmp(name, environ[index], length) == 0)
		{
			return (environ[index]);
		}
	}

		return (NULL);
}

int main(void)
{
	printf("PATH : %s\n", _getenv("PATH"));
	printf("ROOT : %s\n", _getenv("ROOT"));
	printf("HOME : %s\n", _getenv("HOME"));

	return (0);
}
