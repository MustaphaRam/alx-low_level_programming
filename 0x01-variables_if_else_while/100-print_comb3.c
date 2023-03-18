#include <stdio.h>

/**
 * main - entrey point
 *
 * Description: print tow digits using putchar function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, j, r = 1;

	for (i = '0'; i < '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
