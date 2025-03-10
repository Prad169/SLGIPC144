#include <stdio.h>
#include <string.h>
#include "library.h"


void displayBooks(struct Book books[], int count)
{
	int i;

	printf("Book count: %d books\n\n", count);

	for (i = 0; i < count; i++) {
		printf("Book %d: Title: \"%s\" by Author: \"%s\"\n", i + 1, books[i].title, books[i].author);
	}
	putchar('\n');
}
int searchBook(struct Book books[], int count, char title[]) {

	int found = -1, i;

	for (i = 0; i < count; i++) {
		
		if (strcmp(books[i].title, title) == 0) {
			found = i;
		}

	}

	return found;
}