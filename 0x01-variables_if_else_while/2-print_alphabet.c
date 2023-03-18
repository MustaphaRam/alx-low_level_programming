#include <stdio.h>
#include <stdlib.h>

/**
 * main - entrey point
 *
 * Description: print alphabet a to z using function putchar
 *
 * Return: Alwyse 0 ( Success )
*/

int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
