#include <stdio.h>

/**
 *main - prints the alphabet in lowercase then in uppercase
 *
 *Return: alwayz zero
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	char CH = 'A';

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');

	return (0);
}
