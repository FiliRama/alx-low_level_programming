#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14 10 times.
 * 
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putcharar((num / 10) + 48);
			_putcharar((num % 10) + 48);
		}
		_putchar('\n');
	}
}