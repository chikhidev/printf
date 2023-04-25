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

/**
* _strlen - switch char to int
* @s: strung
* Return: int
*/

int _strlen(char *s)
{
int i = 0;

while (*s++)
i++;
return (i);
}


/**
 * print_pointer - print pointer
 * @ptr: pointer
 * Return: counting (i)
 */

int print_pointer(void *ptr)
{
int i = 0;
long int n;

if (!ptr)
{
	return (print_str("(nil)", 0));
}

n = (unsigned long int)ptr;

i += print_str("0x", 0);
i += hex_print(n, "0123456789abcdef");

return (i);
}
