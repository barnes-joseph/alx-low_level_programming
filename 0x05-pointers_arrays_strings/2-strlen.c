#include "main.h"
/**
 * _strlen - A function that finds the length
 * of a string
 * @s: String needed
 * Return: Length of string
 */
int _strlen(char *s)
{
int len = 0;

while (s[len])
len++;
return (len);
}
