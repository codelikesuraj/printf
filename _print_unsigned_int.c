#include "main.h"

void _rec_print_unsigned_int(unsigned int *i, int *c)
{
	unsigned int n = *i;

	if (n >= 0 && n <= 9)
	{
		*c += _putchar(n + '0');
		return;
	}

	*i /= 10;

	_rec_print_unsigned_int(i, c);

	*c += _putchar((n % 10) + '0');
}

/**
 * print_int - prints integer to
 * stdout
 * @arg: a pointer to list containing
 * integer to be printed
 * 
 * Return: number of characters printed
 */
int _print_unsigned_int(va_list arg)
{
	int c, p, r;
	unsigned int i;

	c = 0;
	i = va_arg(arg, unsigned int);

	if (i == 0)
		return (_putchar(i + '0'));

	if (i < 0)
	{
		c += _putchar('-');
		i *= -1;
	}

	_rec_print_unsigned_int(&i, &c);

	return (c);
}
