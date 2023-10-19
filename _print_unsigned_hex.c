#include "main.h"

char _get_hex(int n, int lower_case)
{
	char c;

	if (n >= 0 && n <= 9)
		return (n + '0');
	
	switch (n)
	{
		case 10:
			c = lower_case ? 'a' : 'A';
			break;
		case 11:
			c = lower_case ? 'b' : 'B';
			break;
		case 12:
			c = lower_case ? 'c' : 'C';
			break;
		case 13:
			c = lower_case ? 'd' : 'D';
			break;
		case 14:
			c = lower_case ? 'e' : 'E';
			break;
		case 15:
			c = lower_case ? 'f' : 'F';
			break;
		default:
			c = '\0';
			break;
	}

	return (c);
}

void _rec_print_unsigned_hex(unsigned long int *i, int *c, int lower_case)
{
	unsigned long int n = *i;

	if (n >= 0 && n <= 15)
	{
		*c += _putchar(_get_hex(n, lower_case));
		return;
	}

	*i /= 16;

	_rec_print_unsigned_hex(i, c, lower_case);

	*c += _putchar(_get_hex((n % 16), lower_case));
	
	return;
}

/**
 * print_int - prints integer to
 * stdout
 * @arg: a pointer to list containing
 * integer to be printed
 * 
 * Return: number of characters printed
 */
int _print_unsigned_hex(va_list arg, int lower_case)
{
	int c, p, r;
	unsigned long int i;

	c = 0;
	i = va_arg(arg, unsigned long int);

	if (i == 0)
		return (_putchar(i + '0'));

	if (i < 0)
	{
		c += _putchar('-');
		i *= -1;
	}

	_rec_print_unsigned_hex(&i, &c, lower_case);

	return (c);
}
