#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - prints the last digit of a number
 *
 *Return: always 0
 */

int main(void)
{
		int n;
		int l_d;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				l_d = n % 10;

				if (l_d > 5)
					printf("Last digit of %d is %d and is greater than 5\n", n, l_d);
				else if (l_d == 0)
					printf("Last digit of %d is %d and is 0\n", n, l_d);
				else if (l_d < 6 && l_d != 0)
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_d);

					return (0);
}
