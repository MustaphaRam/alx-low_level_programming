#include <stdio.h>

/**
 * main - entrey point
 *
 * Description: print all alphabet except q an e using function putchar
 *
 * Return: Alwyse 0 ( Success )
*/

int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n == 101 | n == 113)
			n++;
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
