iinclude <stdio.h>

/**
 *main - prints single digit numbers of base 10
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

	putchar('\n');

	return (0);
}
