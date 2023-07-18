#include <stdio.h>
/**
 * main - A program that prints all lowercase except except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 122;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
