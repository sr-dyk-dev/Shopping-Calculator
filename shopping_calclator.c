#include<stdio.h>
int main(){
	
	float itemPrice;
	int itemQuantity;
	float totalCost;
	printf("Enter the Item Price_\n", itemPrice);
	scanf("%f", &itemPrice);
	
	printf("Enter the Item Quantity_\n", itemQuantity);
	scanf("%d", &itemQuantity);
	
	printf("Total Cost:_\n");
	totalCost = (itemPrice * itemQuantity);
	
	printf("You are buying %d items\n Each costing you %.1f\n And Total Cost is %.1f\n", itemQuantity, itemPrice, totalCost);
	return 0;
}
