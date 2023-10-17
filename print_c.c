#include "main.h"

/**
 * print_char - prints a char
 * @val: argument
 * Return: 1
*/
int printf_char(va_list val)
{
    char str;

    str = va_arg(val, int);
    _putchar(str);
    return(1);
}
