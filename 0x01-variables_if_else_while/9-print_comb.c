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
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i > 57)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(i);
			putchar('$');
		}
	}
	return (0);
}
