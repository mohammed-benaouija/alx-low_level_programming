#include <stdio.h>
/**
 * main ->  prints all possible different combinations of three digits.
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int number_1, number_2, numebr_3;

	for (number_1 = 48; number_1 < 58; number_1++)
	{
		for (number_2 = 49; number_2 < 58; number_2++)
		{
			for (numebr_3 = 50; numebr_3 < 58; numebr_3++)
			{
				if (numebr_3 > number_2 && number_2 > number_1)
				{
					putchar(number_1);
					putchar(number_2);
					putchar(numebr_3);
					if (number_1 != 55 || number_2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
