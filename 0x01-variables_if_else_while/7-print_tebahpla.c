#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
{
	char c = 'z';
	int i = 0;

	while (i < 26)
	{
		putchar(c - i);
		i++;
	}
	putchar(10);
	return (0);
}
