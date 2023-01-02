/*
 * Exercise 1-12. Write a program that prints its input one word per line.
 */

#include <ctype.h>
#include <stdio.h>

#define FALSE 0
#define TRUE (!0)

int main(void) {
	int c;
	int word;

	word = FALSE;
	while ((c = getchar()) != EOF) {
		if (!word && isspace(c))
			continue;
		if (isspace(c)) {
			putchar('\n');
			word = FALSE;
			continue;
		}
		putchar(c);
		word = TRUE;
	}
}
