#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len, len1;

len = printf("%c\n", '\0');
len1 = _printf("%c\n", '\0');

printf("len: %d\n", len);
printf("len1: %d\n", len1);
return (0);
}
