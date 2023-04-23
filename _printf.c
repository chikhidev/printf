#include "main.h"

/**
 * switcher- process a single conversion specifier in the printf format string
 * @check_case: the conversion specifier character
 * @vl: the argument list to extract the value to print from
 * @counter: the current character count
 * Return: the updated character count
 */

int switcher(char check_case, va_list vl, int counter)
{
switch (check_case)
{
case 'c':
_putchar(va_arg(vl, int));
counter++;
break;
case 's':
counter += print_str(va_arg(vl, char *));
break;
case 'i':
case 'd':
counter += print_int(va_arg(vl, int));
break;
case 'b':
print_bin(va_arg(vl, int));
break;
case 'u':
print_int(va_arg(vl, int));
break;
case 'o':
print_int(va_arg(vl, int));
break;
case 'x':
print_hex(va_arg(vl, int));
break;
case 'X':
print_HEX(va_arg(vl, int));
break;
case '%':
_putchar('%');
break;
default:
_putchar(check_case);
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

int i = 0;
int counter = 0;
va_list vl;
va_start(vl, format);

while (format[i])
{
if (format[i] == '%')
{
i++;
counter = switcher(format[i], vl, counter);
}
else
_putchar(format[i]);
counter++;
i++;
}

va_end(vl);
return (counter);
}
