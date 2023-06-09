#include "main.h"

/**
* print_str - write a single char
* @str: str to write
* @s_flag: flag
* Return: number of bytes written
*/

int print_str(char *str, int s_flag)
{
int i = 0, counter = 0;

if (!str)
str = "(null)";

while (str[i])
{
if (str[i] < 32 || str[i] >= 127)
{
if (s_flag)
{
_putchar('\\');
_putchar('x');
if (str[i] < 16)
{
_putchar('0');
counter += 3;
}
else
counter += 2;
}
else
counter += print_bin(str[i], 'U');
}
else
{
_putchar(str[i]);
counter++;
}
i++;
}
return (counter);
}

/**
* hex_print - prints the hexadecimal representation of a number
* @n: the number to print
* @base: the base of the number system to use for conversion
*
* Return: the number of digits printed
*/
int hex_print(unsigned int n, char *base)
{
int digits_printed = 0;

if (n / _strlen(base))
digits_printed += hex_print(n / _strlen(base), base);
_putchar(base[n % _strlen(base)]);
digits_printed++;
return (digits_printed);
}



/**
* print_int - print a number
* @n: number to write
* Return: number of bytes written
*/

int print_int(int n)
{
int i = 0;

if (n < 0)
{
i += _putchar('-');
if (n == -2147483648)
{
i += _putchar('2');
n %= 1000000000;
}

i += print_int(-n);
}
else if (n >= 0 && n <= 9)
i += _putchar(n + '0');
else
{
i += print_int(n / 10);
i += print_int(n % 10);
}
return (i);
}



/**
* print_oct - print a number
* @n: number to write
* Return: number of bytes written
*/

void print_oct(int n)
{
n < 0 ? n = -n : n;
if (n / 8 != 0)
print_oct(n / 8);

_putchar(n % 8 + 48);
}

/**
 * print_r - print reversed string
 * @s: string
 * Return: number of bytes written
 */

int print_r(char *s)
{
int i = 0;
int len;

if (!s)
s = "(null)";

len = _strlen(s) - 1;

while (len >= 0)
{
_putchar(s[len]);
len--;
i++;
}

return (i++);
}
