#include <stdio.h>

int main(void) {
	int amount;
	printf("Enter an amount of money: ");
	scanf("%d", &amount);
	int twenties = amount / 20;
	amount = amount - (twenties * 20);
	int tens = amount / 10;
	amount = amount - (tens * 10);
	int fives = amount / 5;
	amount = amount - (fives * 5);
	int ones = amount;

	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf(" $5 bills: %d\n", fives);
	printf(" $1 bills: %d\n", ones);
	return 0;
}
