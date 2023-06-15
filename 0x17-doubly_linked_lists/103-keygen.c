#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KEY_LENGTH 16

/**
 * generate_key - Generates a key based on the given username
 * @username: The username for which to generate the key
 * @key: The buffer to store the generated key
 */
void generate_key(const char *username, char *key)
{
	int i;
	int length = strlen(username);
	int sum = 0;

	for (i = 0; i < length; i++)
	{
		sum += username[i];
	}
	snprintf(key, KEY_LENGTH, "%08x%08x", sum, sum ^ 0x1337d00d);
}

/**
 * main - Entry point of the keygen program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}

	char key[KEY_LENGTH];

	generate_key(argv[1], key);

	printf("%s\n", key);
	return (0);
}
