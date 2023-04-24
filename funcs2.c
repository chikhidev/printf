#include "main.h"

/**
 * print_HEX - write a single char
 * @n: str to write
 * Return: number of bytes written
 */

void print_HEX(int n)
{
n < 0 ? n = -n : n;
if (n / 16 != 0)
{
print_HEX(n / 16);
}
(n % 16 < 10) ? _putchar(n % 16 + 48) : _putchar((n % 16 - 10) + 65);
}

/**
 * string_to_int - switch char to int
 * @c: char
 * Return: int
 */

int string_to_int(char c)
{
if (c < '0' || c > '9')
return (-1);
return ((int)(c - '0'));
}
