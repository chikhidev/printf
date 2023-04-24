#include "main.h"

/**
* print_str - write a single char
* @str: str to write
* @s_flag: flag
* Description: print string
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
_putchar('0');
counter += 3;
}
else
counter++;
counter += hex_print(str[i], "0123456789ABCDEF");
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
* print_bin - print a number
* @n: number to write
* Return: number of bytes written
*/

int print_bin(int n)
{
int temp = n;
int count = 0;
int i;
int count2 = 0;

while (temp > 0)
{
temp /= 2;
count++;
count2++;
}
for (count -= 1; count >= 0; count--)
{
i = n >> count;

if (i & 1)
_putchar('1');
else
_putchar('0');
}
return (count2);
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


