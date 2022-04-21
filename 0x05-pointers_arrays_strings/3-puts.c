#include "main.h"
/**
 * _puts - A function that prints a string
 * followed by a new line
 * @str: String to be printed
 */
void _puts(char *str)
{
int n = 0;
while (str[n])
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
