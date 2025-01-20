#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float pizzaPrice, quantitypizza, delivery;
	int trcost;
	char ascii;

	printf("Enter the price of the pizza: ");
	scanf("%f", &pizzaPrice);

	printf("Enter the quantity of the pizza: ");
	scanf("%f", &quantitypizza);

	trcost = (int)(pizzaPrice * quantitypizza);

	printf("Original total cost: %.2f\n", pizzaPrice * quantitypizza);
	printf("Trancated total cost: %d\n", trcost);
	trcost = pizzaPrice * quantitypizza;
	delivery = trcost + 5.99;
	ascii = (char)trcost;
	printf("Total cost with delivery fee: %.2f\n", delivery);
	printf("promotional ASCII value: %c", ascii );

	return 0;
}