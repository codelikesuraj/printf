#include "main.h"

/**
 * _check_spec - check if any specifier
 * is set and print accordingly
 * @c: pointer to character counter
 * @f: pointer to character string
 * composed of one or more directives
 * @args: pointer to list containing
 * arguments
 */
void _check_spec(int *c, const char *f, va_list args)
{
	int i, j = 0;
	print_func funcs[] = {
		{'c', _print_char},
		{'d', _print_int}, {'i', _print_int},
		{'o', _print_u_oct},
		{'p', _print_ptr},
		{'s', _print_str},
		{'u', _print_u_int},
		{'X', _print_u_HEX}, {'x', _print_u_hex}
	};

	for (i = 0; *(f + i) != '\0';  i++)
	{
		j = 0;

		if (!(*(f + i) == '%' && *(f + i + 1)))
		{
			*c += _putchar(f[i]);
			continue;
		}

		if (*(f + i + 1) - '%' == 0)
		{
			*c += _putchar('%');
			i++;
			continue;
		}

		while (j < 9 && (*(f + i + 1) != funcs[j].type))
			j++;

		if (j < 9)
		{
			*c += funcs[j].func(args);
			i++;
			continue;
		}

		*c += _putchar(f[i]);
	}
}

/**
 * _printf - produces output according
 * to a format.
 * @format: character string composed
 * of zero or more directives
 * @...: optional arguments
 *
 * Return: the number of characters
 * printed (excluding the null byte
 * used to end output to strings).
 */
int _printf(const char *format, ...)
{
	int c = 0;
	va_list args;

	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))
		return (-1);

	va_start(args, format);

	_check_spec(&c, format, args);

	va_end(args);

	return (c);
}
