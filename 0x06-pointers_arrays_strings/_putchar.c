#include "main.h"
#include <unistd>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to prin
 *
 * Return: On success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c,1));
}
