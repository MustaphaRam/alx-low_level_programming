#include <stdio.h>

/**
 * main - entrey point
 *
 * Description: function for printalphabet
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
