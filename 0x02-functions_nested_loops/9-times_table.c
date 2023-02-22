#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: nothing on success
 */
void times_table(void)
{
	int s = 0, e = 9, c = 0;

		while (c <= 9)
		{
			while (s <= e)
			{
				int product = c * s;

				if (s != 0)
				{
					_putchar(',');
					if (product < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
						_putchar(' ');
				}
				if (product < 10)
					_putchar(product + '0');
				else
				{
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
				if (s == e)
					_putchar('\n');
				s++;
			}
			s = 0;
			c++;
		}
}
