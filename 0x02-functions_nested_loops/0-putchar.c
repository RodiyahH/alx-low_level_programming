#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character
 * @c: the character to be printed
 * Return: 1 (Success)
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
