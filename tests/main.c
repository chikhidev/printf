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
	int len,len1;

	// len   = printf("%s\n",NULL);
	len = printf(" printf: %s\n",NULL);
	len1 = _printf("_printf: %s\n",NULL);

	// printf("len: %d\n",len);
	printf("len1: %d\n",len);
	printf("len1: %d\n",len1);
  return (0);
}
