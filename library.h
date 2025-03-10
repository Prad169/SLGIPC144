#define TMAX 100
#define AMAX 100

struct Book {
	char title[TMAX + 1];
	char author[AMAX + 1];
};

void displayBooks(struct Book books[], int count);
int searchBook(struct Book books[], int count, char title[]);
