#include <stdio.h>

int main(void) {
	float amount;	
	printf("Enter an amount: ");
	scanf("%f", &amount);
	printf("%.2f\n", amount * 1.05f);
	return 0;
}
