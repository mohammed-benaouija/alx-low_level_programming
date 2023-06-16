#include <stdio.h>

int main()
{
	char alphabet= 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet!= 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
