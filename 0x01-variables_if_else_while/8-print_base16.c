#include <stdio.h>
/**
 * main - A program that prints all the numbers of base 16 in lowercase
 * Retur: 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		c++;
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
		c++;
	}
	putchar('\n');
	return (0);
}
