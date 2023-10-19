#include "main.h"

/**
 * print_int - prints integer to
 * stdout
 * @arg: a pointer to list containing
 * integer to be printed
 * 
 * Return: number of characters printed
 */
int _print_ptr(va_list arg)
{
	int c;
	int *s;

	c = 0;

	c += _putchar('0');
	c += _putchar('x');
	c += _print_unsigned_hex(arg, 1);

	return (c);
}
