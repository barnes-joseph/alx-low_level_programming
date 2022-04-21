#include "main.h"
/**
 * _strcpy - A function that copies a string
 * to a different variable
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: returns a string
 */
char *_strcpy(char *dest, char *src)
{
int i = -1;

do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');

return (dest);
}
