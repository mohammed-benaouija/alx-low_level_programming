#include <stdio.h>
/**
 * main ->  prints all possible different combinations of two digits.
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int numebr_1, numebr_2;

	for (numebr_1 = 48; numebr_1 <= 56; numebr_1++)
	{
		for (numebr_2 = 49; numebr_2 <= 57; numebr_2++)
		{
			if (numebr_2 > numebr_1)
			{
				putchar(numebr_1);
				putchar(numebr_2);
				if (numebr_1 != 56 || numebr_2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
