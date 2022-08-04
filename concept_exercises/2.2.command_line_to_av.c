#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - is a function that splits a string and returns 
 * an array of each word of the string.
 *
 * Return: 0
 */

int main(void)
{
	char *buffer;
	size_t length = 1024;
	char *token;
	int read;

	buffer = malloc(sizeof(size_t) * length);
	while (1)
	{
		printf("Monemax$ ");
		read = getline(&buffer, &length, stdin);
		if (read != EOF)
		{
			printf("buffer getline: %s", buffer);
		}

		token = strtok(buffer, " ");
		while (token != NULL)
		{
			printf("buffer strtok: %s\n", token);
			token = strtok(NULL, " ");
		}
	}
	return (0);
}
