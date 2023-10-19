#include "main.h" 

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
	int c, i;
	va_list args;
	
	c = 0;
	va_start(args, format);

	for (i = 0; *(format + i) != '\0';  i++)
	{
		if (*(format + i) == '%' && *(format + i + 1))
		{
			switch (*(format + i + 1))
			{
				case '%':
					c += _putchar('%');
					i++;
					break;
				case 'c':
					c += _print_char(args);
					i++;
					break;
				case 'd':
				case 'i':
					c += _print_int(args);
					i++;
					break;
				case 'o':
					c += _print_unsigned_oct(args);
					i++;
					break;
				case 'p':
					c += _print_ptr(args);
					i++;
					break;
				case 's':
					c += _print_str(args);
					i++;
					break;
				case 'u':
					c += _print_unsigned_int(args);
					i++;
					break;
				case 'X':
					c += _print_unsigned_hex(args, 0);
					i++;
					break;
				case 'x':
					c += _print_unsigned_hex(args, 1);
					i++;
					break;
				default:
					c += _putchar(format[i]);
					break;
			}
		}
		else
		{
			c += _putchar(format[i]);
		}
	}

	va_end(args);

	return (c);
}
