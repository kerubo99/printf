#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - the function chosen
 * @id: takes note of the placeholder
 * @f: holds the function corresponding to the id placeholder
*/
struct format
{
    char *id;
    int (*f)();
} match;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlenc(const char *str);
int _strlen(char *str);
int printf_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_hex_extra(unsigned long int num);
int print_pointer(va_list val);
int print_revs(va_list val);
int print_rot13(va_list val);

#endif
