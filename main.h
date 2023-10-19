#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>

int _print_char(va_list arg);
int _print_int(va_list arg);
int _print_ptr(va_list arg);
int _print_str(va_list arg);
int _print_unsigned_hex(va_list arg, int lower_case);
int _print_unsigned_int(va_list arg);
int _print_unsigned_oct(va_list arg);
int _printf(const char *format, ...);
int _putchar(char c);

#endif /* _MAIN_H_ */
