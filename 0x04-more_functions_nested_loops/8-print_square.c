#include "main.h"
/**
 * print_square -  function that draws a
 * square on the terminal
 *
 * @n: number of times character should be printed
 */
void print_diagonal(int n)
{
int i;
int j;
if (n <= 0)
{
n = 0;
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar(35);
}
_putchar('\n');
i++;
}
}
