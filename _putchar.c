#include "main.h"

/**
 * _putchar - writes the characater c
 * to stdout
 * @c: character to be printed
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}