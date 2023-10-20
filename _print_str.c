#include "main.h"

/**
 * _print_str - prints string to stdout
 * @arg: a pointer to list containing
 * integer to be printed
 *
 * Return: number of characters printed
 */
int _print_str(va_list arg)
{
	char *s;
	int c, i;

	c = 0;
	s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0;  *(s + i) != '\0'; i++)
		c += _putchar(*(s + i));

	return (c);
}
