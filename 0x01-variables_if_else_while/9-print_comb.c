#include <stdio.h>
/**
 * main - Print all possible combinations of single-digit numbers
 * Description: Print numbers in ascending order
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
