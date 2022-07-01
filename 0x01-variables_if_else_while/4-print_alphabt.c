#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters, except for e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int letter, n;

	for (letter = 97, n = 1; n < 27; letter++, n++)
	{
		if (letter == 101 || letter == 113)
			continue;
		putchar(letter);
	}
		putchar('\n');

	return (0);
}
