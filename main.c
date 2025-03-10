#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "library.h"
#define BMAX 100

int main(void)
{
	struct Book lib[BMAX] = { {"The Great Gatsby", "F. Scott Fitzgerald"}, 
							  {"1984", "George Orwell"}, 
							  {"To Kill a Mockingbird", "Harper Lee"}, 
							  {"Moby Dick", "Herman Melville"}, 
							  {"Pride and Prejudice", "Jane Austen"}};

	int option, exit = 0, bookCount = 0;
	int i, bookIndex;
	char title[BMAX] = { 0 };

	for (i = 0; i < BMAX; i++) {
		if (strlen(lib[i].title) != 0) {
			bookCount++;
		}
	}

	printf("Welcome from PRAD's Library!\n"
		"============================\n\n");

	do {
		printf("Library Menu:\n"
		"1. Display All Books\n"
		"2. Search for a Book\n"
		"3. Exit\n\n");

		printf("Choose an option: ");
		scanf("%d", &option);
		putchar('\n');

		if (option == 1) {
			displayBooks(lib, bookCount);
		}
		else if (option == 2) {

			printf("Enter the book title to search: ");
			scanf(" %100[^\n]", title);
			putchar('\n');

			bookIndex = searchBook(lib, bookCount, title);

			if (bookIndex == -1) {
				printf("Book not found!\n\n");
			}
			else {
				printf("Book found: \"%s\" by %s\n\n", lib[bookIndex].title, lib[bookIndex].author);
			}
		}
		else if (option == 3) {
			exit = 1;
			printf("Bye!!\n\n");
		}
		else {
			printf("* Invalid option! Please try again: \n\n");
		}

	} while (!exit);

	return 0;
}