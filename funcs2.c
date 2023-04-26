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


/**
* print_r - switch char to int
* @s: strung
* Return: int
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

/**
* print_R - print pointer
* @s: pointer
* Return: counting (i)
*/


int print_R(char *s)
{
int i = 0;

if (!s)
{
return (print_str("(null)", 1));
}

while (*s)
{
char c = *s;
if (c >= 'a' && c <= 'z')
{
c = ((c - 'a') + 13) % 26 + 'a';
}
else if (c >= 'A' && c <= 'Z')
{
c = ((c - 'A') + 13) % 26 + 'A';
}

i += _putchar(c);
s++;
}

return (i);
}
