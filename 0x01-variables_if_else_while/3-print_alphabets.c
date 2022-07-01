#include <stdio.h>

/* printing the alphabet */
int main(void)
{
	int c,n;

	for (c = 97,n=1; c < 27; c++,n++){
		putchar(c);
	}
	for (c = 65,n=1; c < 27; c++,n++){
		putchar(c);
	}
		putchar('\n');
	return (0);
}
