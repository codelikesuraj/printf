#include "main.h"

/**
 * _rec_print_u_hex - recursively print
 * hexadecimal values to stdout
 * @i: pointer to hexadecimal
 * @c: pointer to characters counter
 */
void _rec_print_u_hex(unsigned long int *i, int *c)
{
	unsigned long int n = *i;

	if (n <= 15)
	{
		*c += _putchar(_get_hex(n, 1));
		return;
	}

	*i /= 16;

	_rec_print_u_hex(i, c);

	*c += _putchar(_get_hex((n % 16), 1));
}

/**
 * _print_u_hex - prints hexadecimal to
 * stdout
 * @arg: a pointer to list containing
 * integer to be printed
 *
 * Return: number of characters printed
 */
int _print_u_hex(va_list arg)
{
	int c;
	unsigned long int i;

	c = 0;
	i = va_arg(arg, unsigned long int);

	if (i == 0)
		return (_putchar(i + '0'));

	_rec_print_u_hex(&i, &c);

	return (c);
}
