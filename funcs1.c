#include "main.h"

/**
 * print_str - write a single char
 * @s: str to write
 * @limit: int limiter to limit string
 * Return: number of bytes written
 */

int print_str(char *s, int limit)
{
int i = 0;
if (!s)
{
write(1, "(null)", 6);
return (6);
}

while (s[i])
{
if ((i == limit) && i)
break;
_putchar(s[i]);
i++;
}
return (i);
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
 * print_bin - print a number
 * @n: number to write
 * Return: number of bytes written
 */

void print_bin(int n)
{
n < 0 ? n = -n : n;
if (n / 2 != 0)
print_bin(n / 2);

_putchar(n % 2 + 48);
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
 * print_hex - print a number
 * @n: number to write
 * Return: number of bytes written
 */

void print_hex(int n)
{
n < 0 ? n = -n : n;
if (n / 16 != 0)
{
print_hex(n / 16);
}
(n % 16 < 10) ? _putchar(n % 16 + 48) : _putchar((n % 16 - 10) + 97);
}
