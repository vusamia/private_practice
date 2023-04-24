#include <stdio.h>

/**
 *main - prints all numbers of base 16 in lowercase
 *
 *Return: always 0
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}

	char ch = 'a';

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
