#include "main.h"
/**
 * _isdigit - A function that checks
 * that a character is a digit
 * @c: int type number
 * Return: 0 or 1
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
return (0);
}
