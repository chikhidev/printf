#include "main.h"
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: a write system call. it should go well. return -1 if somethine wrong
*/
int _putchar(char c)
{
	if (c == '\0')
	{
	c = ' ';
	}
	if (write(1, &c, 1) == -1)
	{
		return (-1);
	}
	return (1);
}
