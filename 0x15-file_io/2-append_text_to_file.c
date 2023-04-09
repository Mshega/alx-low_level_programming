#include "main.h"

/**
 * append_text_to_file - Appends text on file end.
 * @filename: Point to the name of the file.
 * @text_content: String to add at the end of file.
 *
 * Return: If function is false or filename is NULL - -1.
 * Or file does not exist the user lacks write permissions - -1.
 * Else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int i, x;
int	len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
i = open(filename, O_WRONLY | O_APPEND);
x = write(i, text_content, len);
if (i == -1 || x == -1)
return (-1);
close(i);
return (1);
}
