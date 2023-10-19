#include "main.h"

/**
 * _rec_print_u_int - recursively print
 * unsigned integer values to stdout
 * @i: pointer to unsigned int
 * @c: pointer to characters counter
 */
void _rec_print_u_int(unsigned int *i, int *c)
{
	unsigned int n = *i;

	if (n <= 9)
	{
		*c += _putchar(n + '0');
		return;
	}

	*i /= 10;

	_rec_print_u_int(i, c);

	*c += _putchar((n % 10) + '0');
}

/**
 * _print_u_int - print unsigned integer
 * to stdout
 * @arg: a pointer to list containing
 * unsigned integer to be printed
 *
 * Return: number of characters printed
 */
int _print_u_int(va_list arg)
{
	int c;
	unsigned int i;

	c = 0;
	i = va_arg(arg, unsigned int);

	if (i == 0)
		return (_putchar(i + '0'));

	_rec_print_u_int(&i, &c);

	return (c);
}
