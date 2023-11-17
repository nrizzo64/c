#include <stdio.h>

int main(void) {
	float commission, rivalCommission, value, pricePerShare, numberOfShares;
	

	printf("Enter numbers of shares to trade: ");
	scanf("%f", &numberOfShares);

	printf("Enter the price per share: ");
	scanf("%f", &pricePerShare);

	value = pricePerShare * numberOfShares;

	if (value < 2500.00f)
		commission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + .0011f * value;
	else 
		commission = 255.00f + .0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;

	printf("Commission: $%.2f\n", commission);

	if (numberOfShares < 2000)
		rivalCommission = 33 + 0.3 * numberOfShares;
	else 
		rivalCommission = 33 + 0.2 * numberOfShares;
	
	printf("Rival commission: $%.2f\n", rivalCommission);

	return 0;
}
