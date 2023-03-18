#include <stdio.h>

/**
 * main - entrey point
 *
 * Description: print latter lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
