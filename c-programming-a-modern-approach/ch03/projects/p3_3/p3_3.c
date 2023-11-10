#include <stdio.h>

int main(void) {
	int GS1Prefix, groupIdentifier, publisherCode, itemNumber, checkDigit;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &GS1Prefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);
	printf("GS1 prefix: %d\n", GS1Prefix);	
	printf("Group identifier: %d\n", groupIdentifier);
	printf("Publisher code: %d\n", publisherCode);
	printf("Item number: %d\n", itemNumber);
	printf("Check digit: %d\n", checkDigit);
	return 0;
}
