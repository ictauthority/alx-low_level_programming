#include <stdio.h>
/**
 * main - A  program that prints all possible different combinations
 * Return: 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = '0'; n = '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			if (n != m)
			{
				putchar(n);
				putchar(m);
			}
		}
	}
	putchar('\n');
	return (0);
}
