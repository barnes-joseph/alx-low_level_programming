#include "main.h"
/**
 * print_rev - a function that prints the reverse
 * of a string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
int n = _strlen(s);
int i = 0;
char reversed[n];
while (n)
{
reversed[i] = s[n - 1];
i++;
n--;
}
_puts(reversed);
}
