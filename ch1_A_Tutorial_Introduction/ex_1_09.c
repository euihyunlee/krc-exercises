/*
 * Exercise 1-9. Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank.
 */ 

#include <stdio.h>

int main(void) {
	int c, b;

	b = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' && b)
			continue;
		if (c == ' ')
			b = 1;
		else
			b = 0;
		putchar(c);
	}
}
