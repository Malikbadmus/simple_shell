#include <unistd.h>

/**
 * _putchar - writes a single character to stdout
 * @c: character to be written
 *
 * Return: 1 on suceess, otherwise -1 and errno
 *		is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
