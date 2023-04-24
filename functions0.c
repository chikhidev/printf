#include "main.h"

/**
 * print_str - write a single char
 * @s: str to write
 * Return: number of bytes written
 */

unsigned int print_str(char *s)
{
unsigned int i = 1;
if (s == NULL) {
_putchar('(');
_putchar('n');
_putchar('u');
_putchar('l');
_putchar('l');
_putchar(')');
return (6);
}
while (s[i]) {
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

unsigned int print_int(int n) {
unsigned int i = 1;

if (n < 0) {
i++;
_putchar('-');
n = -n;
}

if (n / 10 != 0) {
i++;
print_int(n / 10);
}
_putchar(n % 10 + 48);
return (i);
}

/**
 * print_bin - print a number
 * @n: number to write
 * Return: number of bytes written
 */

void print_bin(int n) {
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

void print_oct(int n) {
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

void print_hex(int n) {
n < 0 ? n = -n : n;
if (n / 16 != 0) {
print_hex(n / 16);
}
(n % 16 < 10) ? _putchar(n % 16 + 48) : _putchar((n % 16 - 10) + 97);
}
