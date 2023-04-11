#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - 1024 bytes for a buffer.
 * @file: Name of the file buffer storing a chars.
 *
 * Return: Pointer to the newly buffer.
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * close_file - Close the file descriptor.
 * @fd: File descriptor to be closed.
 */
void close_file(int fd)
{
int x;
x = close(fd);
if (x == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Copy content of a file to another file.
 * @argc: Number of arguments supplied.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 when true.
 *
 * Description: When the argument count is incorrect - exit code 97.
 * If file_clean does not exist or cannot be read - exit code 98.
 * If file_t cannot be created or written to - exit code 99.
 * If file_t or file_clean cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int clean, t, i, j;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_clean file_t\n");
exit(97);
}
buffer = create_buffer(argv[2]);
clean = open(argv[1], O_RDONLY);
i = read(clean, buffer, 1024);
t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (clean == -1 || i == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
j = write(t, buffer, i);
if (t == -1 || j == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
i = read(clean, buffer, 1024);
t = open(argv[2], O_WRONLY | O_APPEND);
} while (i > 0);
free(buffer);
close_file(clean);
close_file(t);
return (0);
}
