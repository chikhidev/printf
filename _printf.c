#include "main.h"




/**
 * switcher- process a single conversion specifier in the printf format string
 * @vl: the argument list to extract the value to print from
 * @counter: the current character count
 * @i: the index
 * @s: string
 * Return: the updated character count
 */


int switcher(va_list vl, int counter, int *i, const char *s)
{
switch (s[*i])
{
case 'c':
_putchar(va_arg(vl, int));
counter++;
break;
case 's':
counter += print_str(va_arg(vl, char *), 0);
break;
case '%':
_putchar('%');
counter++;
break;
default:
_putchar(s[*i - 1]);
_putchar(s[*i]);
counter += 2;
break;
}
return (counter);
}

/**
 * _printf - print a formatted string to standart output
 * @format: the printf format string to use
 * Return: total number of characters printed
 */

int _printf(const char *format, ...)
{

int i = 0, counter = 0;
va_list vl;
va_start(vl, format);

while (format[i])
{
if (format[i] == '%')
{
i++;
counter = switcher(vl, counter, &i, format);
}
else
{
_putchar(format[i]);
counter++;
}
i++;
}

va_end(vl);
return (counter);
}
