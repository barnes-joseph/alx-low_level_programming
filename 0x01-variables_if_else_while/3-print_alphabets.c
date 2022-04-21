#include <stdio.h>
/**
 * main - A function that prints both lower case
 * and uppercase alphabets
 *
 * Return: int
 */
int main(void)
{
for (int i = 97; i <= 122; i++)
putchar(i);
for (int i = 65; i <= 90; i++)
putchar(i);
putchar('\n');
return (0);
}
