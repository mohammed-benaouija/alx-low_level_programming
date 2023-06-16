#include <stdio.h>
int main()
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
