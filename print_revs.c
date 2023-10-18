#include "main.h"

/**
 * print_revs - prints str in reverse
 * @val: value to print in reverse
 * Return: the string in reverse
*/
int print_revs(va_list val)
{
char *s = va_arg(val, char *);
int i;
int j = 0;

if (s == NULL)
{
s = "(null)";
while (s[j] != '\0')
{
j++;
}
for (i = j - 1; i >= 0; i--)
{
_putchar(s[i]);
}
}
return (j);
}
