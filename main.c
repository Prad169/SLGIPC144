#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "fruit_utils.h"

int main(void)
{
	char fn;
	float pricePerkg, quantity, totalprice;

	printf("Enter the name of the fruit: ");
	scanf("%c", &fn);
	printf("Enter the price pr kg: ");
	scanf("%f", &pricePerkg);
	printf("Enter the quantity: ");
	scanf("%f", &quantity);
	totalprice = calculateTotal(pricePerkg, quantity);
	printReceipt(fn, pricePerkg, quantity, totalprice);
	return 0;
}
