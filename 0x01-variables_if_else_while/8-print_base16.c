#include <stdio.h>
/**
 * main - print base 16 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i;
	char j;

	
	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar(10);
	
	return (0);
}
