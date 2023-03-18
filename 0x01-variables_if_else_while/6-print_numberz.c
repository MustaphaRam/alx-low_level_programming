#include <stdio.h>

/**
 * main - entrey point
 *
 * Description: print a numbers 0 to 9 using putchar function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
