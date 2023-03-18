#include <stdio.h>

/**
 * main - entrey point
 *
 * Description: print Hexadecimal
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char n[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	char n1[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	int i;

	for (i = 0; i < 103; i++)
	{
		if (i < 10)
			putchar(n1[i]);
		else if (i == 10)
			i = 96;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
