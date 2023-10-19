#include "main.h"

/**
 * _rec_print_u_oct - recursively print
 * unsigned octal values to stdout
 * @i: pointer to unsigned octals
 * @c: pointer to characters counter
 */
void _rec_print_u_oct(unsigned int *i, int *c)
{
	unsigned int n = *i;

	if (n <= 7)
	{
		*c += _putchar(n + '0');
		return;
	}

	*i /= 8;

	_rec_print_u_oct(i, c);

	*c += _putchar((n % 8) + '0');
}

/**
 * _print_u_oct - print unsigned octals
 * to stdout
 * @arg: a pointer to list containing
 * octal to be printed
 *
 * Return: number of characters printed
 */
int _print_u_oct(va_list arg)
{
	int c;
	unsigned int i;

	c = 0;
	i = va_arg(arg, unsigned int);

	if (i == 0)
		return (_putchar(i + '0'));

	_rec_print_u_oct(&i, &c);

	return (c);
}
