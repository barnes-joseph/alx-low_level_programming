#include "main.h"
/**
 * print_line - A function that
 * prints a line with its length equal
 * to the integer
 * @n: int type number
 */
void print_diagonal(int n)
{
if (n <= 0)
_putchar('\n');
else
{
while (n--)
_putchar(92);
_putchar('\n');
}
}