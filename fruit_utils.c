#include <stdio.h>
#include "fruit_utils.h"
float calculateTotal(float pricePerkg, float quantity)
{
	return pricePerkg * quantity;

}

void printReceipt(char fn, float pricePerkg, float quantity, float totalprice)
{
	printf("\n---Grocery---\n");
	printf("Fruit: %c\n", fn);
	printf("Price per kg: %2.f\n", pricePerkg);
	printf("Quantity: %2.f\n", quantity);
	printf("Total price: %2.f\n", totalprice);
	printf("Thank you for shopping with us!");
}