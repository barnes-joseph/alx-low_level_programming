#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
int n = 0;
int i = 0;
int l;
char a;
char b;
while (s[n])
n++;
l = (n / 2);
while (l)
{
a = s[n - 1];
b = s[i];
s[n - 1] = b;
s[i] = a;
n--;
l--;
i++;
}
}
