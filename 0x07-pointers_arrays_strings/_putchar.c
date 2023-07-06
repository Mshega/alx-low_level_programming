<<<<<<< HEAD
nclude "main.h"
=======
#include "main.h"
>>>>>>> ac193c863884020ccc727d0156840981da76fe70
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
<<<<<<< HEAD

=======
>>>>>>> ac193c863884020ccc727d0156840981da76fe70
