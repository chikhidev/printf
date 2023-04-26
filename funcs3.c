
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
