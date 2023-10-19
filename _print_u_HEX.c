#include "main.h"

/**
 * _rec_print_u_HEX - recursively print
 * hexadecimal values to stdout
 * @i: pointer to hexadecimal
 * @c: pointer to characters counter
 */
void _rec_print_u_HEX(unsigned long int *i, int *c)
{
	unsigned long int n = *i;

	if (n <= 15)
	{
		*c += _putchar(_get_hex(n, 0));
		return;
	}

	*i /= 16;

	_rec_print_u_HEX(i, c);

	*c += _putchar(_get_hex((n % 16), 0));
}

/**
 * _print_u_HEX - prints hexadecimal to
 * stdout
 * @arg: a pointer to list containing
 * integer to be printed
 *
 * Return: number of characters printed
 */
int _print_u_HEX(va_list arg)
{
	int c;
	unsigned long int i;

	c = 0;
	i = va_arg(arg, unsigned long int);

	if (i == 0)
		return (_putchar(i + '0'));

	_rec_print_u_HEX(&i, &c);

	return (c);
}
