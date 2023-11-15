#include <stdio.h>

int main(void) {
	int input;
	printf("Enter a two-digit number: ");
	scanf("%d", &input);
	int tens = input % 10 * 10;
	int ones = input / 10;
	printf("%2d\n", tens + ones);
	
	return 0;
}
