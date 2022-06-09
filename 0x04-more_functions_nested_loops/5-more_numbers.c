#include "main.h"
/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 * Return: void
 */
void more_numbers(void)
{
	for (int c = 0; c < 10; c++)
	{
		for ( int i = 0; i < 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}	
			else
			{	
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
