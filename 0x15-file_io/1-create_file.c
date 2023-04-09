#include "main.h"

/**
 * create_file - Create a file.
 * @filename: Pointer to the name of file created.
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 * Else - 1.
 */
int create_file(const char *filename, char *text_content)
{
int x, i, len = 0;
if (!filename)
return (-1);
if (text_content)
{
while (text_content[len])
len++;
}
x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (x < 0)
{
return (-1);
}
i = write(x, text_content, len);
if (i < 0)
{
close(x);
return (-1);
}
close(x);
return (1);
}
