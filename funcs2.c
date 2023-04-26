#include "main.h"

/**
* switch_base - only for switching cases
* @base: int
* @small: char
* @big: int
* @num: char
* @j: int
* Return: counting
*/

int switch_base(int base, char *small, char *big, char *num, int j)
{

switch (base)
{
case 'X':
return (_putchar(small[(int)num[j]]));
case 'x':
return (_putchar(big[(int)num[j]]));
default:
return (_putchar(num[j] + '0'));
}

}

/**
* print_bin - write a single char
* @n: str to write
* @base: char
* Return: number of bytes written
*/

int print_bin(unsigned long int n, char base)
{
int op1 = 0, op2, x, spec;
char num[64], *small = "0123456789abcdef", *big = "0123456789ABCDEF";

if (n == 0)
{
return (_putchar('0'));
}

/* check specifier */

if ((base == 'b'))
	spec = 2;
else if ((base == 'o'))
	spec = 8;
else
	spec = 16;

while (n)
{
x = n % spec;
n = n / spec;
num[op1] = x;
op1++;
}

op2 = op1 - 1;

while (op2 >= 0)
{
n = switch_base(base, small, big, num, op2);
op2--;
}

return (op1);
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

i += print_str("0x", 1);
i += print_bin(n, 'U');

return (i);
}


