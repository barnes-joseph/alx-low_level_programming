#include "main.h"
/**
 * puts2 - A function that prints the character
 * whose index is even
 * @str: String parameter
 */
void puts2(char *str)
{
int n = 0, i = 0;
while (str[n])
n++;

while (n)
{
if (i % 2 == 0)
_putchar(str[i]);
n--;
i++;
}
_putchar('\n');
}
