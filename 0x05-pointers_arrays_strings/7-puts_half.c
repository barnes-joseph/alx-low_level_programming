#include "main.h"
/**
 * puts_half - A function that prints half
 * of the string
 * @str: String parameter needed
 */
void puts_half(char *str)
{
int n = 0, i = 0;
while (str[n])
n++;

if (n % 2 == 0)
i = n / 2;
else
i = (n + 1) / 2;

while (i < n)
{
_putchar(str[i]);
i++;

}
_putchar('\n');
}
