#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>

/**
 * struct printer - Struct printer
 * @type: the format specifier
 * @func: the function to use
 */
typedef struct printer
{
	char type;
	int (*func)(va_list);
} print_func;

char _get_hex(int n, int lower_case);
int _print_char(va_list arg);
int _print_int(va_list arg);
int _print_ptr(va_list arg);
int _print_str(va_list arg);
int _print_u_HEX(va_list arg);
int _print_u_hex(va_list arg);
int _print_u_int(va_list arg);
int _print_u_oct(va_list arg);
int _printf(const char *format, ...);
int _putchar(char c);

#endif /* _MAIN_H_ */
