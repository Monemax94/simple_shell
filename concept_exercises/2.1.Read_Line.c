#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints "$ " waits for the user to enter a command.
 * Return: Always(0).
 */

int main(void)
{
	char *buffer = NULL;
	size_t length = 1024;
	size_t read;

	buffer = malloc(sizeof(size_t) * length);

	while (1)
	{
		printf("Monemax$ ");
		read = getline(&buffer, &length, stdin);
		if (read != EOF)
		{
			printf("%s", buffer);
		}
	}
	return (0);
}
