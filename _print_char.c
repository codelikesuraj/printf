#include "main.h"

/**
 * print_char - prints character to
 * stdout
 * @arg: a pointer to list containing
 * character to be printed
 * 
 * Return: number of characters printed
 */
int _print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}
