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
<<<<<<< HEAD
case 'S':
counter += print_str(va_arg(vl, char *), 1);
break;
=======
>>>>>>> 0432a9be6adb81c0f0e780ceff649cea93612b6a
case 's':
counter += print_str(va_arg(vl, char *), 0);
break;
case 'S':
counter += print_str(va_arg(vl, char *), 1);
break;
case '%':
_putchar('%');
counter++;
break;
case 'd':
case 'i':
counter += print_int(va_arg(vl, int));
break;
case 'b':
counter += print_bin(va_arg(vl, int));
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
if (!format || (format[0] == '%' && !format[1]))
{
return (-1);
}
if (format[0] == '%' && format[1] == ' ' && !format[2])
{
return (-1);
}
while (format[i] && format)
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
