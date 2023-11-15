#include <stdio.h>

int main(void) {
	int input;
	printf("Enter a three-digit number: ");
	scanf("%d", &input);
	int ones = input / 100;
	int remainder = input % 100;
	int tens = remainder / 10 * 10;
	int hundreds = remainder % 10 * 100;
	printf("%3d\n", hundreds + tens + ones);
	
	return 0;
}
