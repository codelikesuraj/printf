#include "main.h"

/**
 * _print_ptr - prints pointer to
 * stdout
 * @arg: a pointer to list containing
 * pointer to be printed
 *
 * Return: number of characters printed
 */
int _print_ptr(va_list arg)
{
	int c = 0;

	c += _putchar('0');
	c += _putchar('x');
	c += _print_u_hex(arg);

	return (c);
}
