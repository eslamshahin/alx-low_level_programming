#include "main.h"
/**
 * _strcat - concatinate 2 strings.
 * @dest: first string.
 * @src: second string.
 * Return: string.
 */
char *_strcat(char *dest, char *src)
{
int i = 0, k = 0;

while (dest[i] != '\0')
i++;

while (src[k] != '\0' && n > k)
{
dest[i] = src[k];
k++;
i++;
}
if (n > 0)
{
dest[i] = '\0';
}

return (dest);
}
