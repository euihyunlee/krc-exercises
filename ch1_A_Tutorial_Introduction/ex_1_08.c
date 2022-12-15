/*
 * Exercise 1-9. Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

int main(void) {
	int c, b, t, n;

	b = t = n = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			b++;
		else if (c == '\t')
			t++;
		else if (c == '\n')
			n++;
	}
	printf("blanks: %d\ntabs: %d\nnewlines: %d\n", b, t, n);
}
