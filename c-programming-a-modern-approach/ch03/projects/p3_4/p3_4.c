#include <stdio.h>

int main(void) {
	int areaCode, telephonePrefix, lineNumber;
	printf("Enter phone number [ (xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &areaCode, &telephonePrefix, &lineNumber);
	printf("You entered %d.%d.%d\n", areaCode, telephonePrefix, lineNumber);
	return 0;
}
