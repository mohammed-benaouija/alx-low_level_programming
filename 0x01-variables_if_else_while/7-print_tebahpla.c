#include <stdio.h>

int main()
{
	char alphabet = 'z';

	while (alphabet>= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
