#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile- Read a text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters read
 * Return: w- number of bytes read and printed
 * 0 when function is false or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t we, x, mx;

	mx = open(filename, O_RDONLY);
	if (mx == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	x = read(mx, b, letters);
	we = write(STDOUT_FILENO, b, x);

	free(b);
	close(mx);
	return (we);
}
