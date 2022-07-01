#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int letter, n;

	for (letter = 122, n = 1; n < 27; letter--, n++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);

}
