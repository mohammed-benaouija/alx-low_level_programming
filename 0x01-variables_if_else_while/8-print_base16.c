#include <stdio.h>
/**
 * main ->   prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int n;
	char alphabet;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
