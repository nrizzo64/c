#include <stdio.h>

int main(void) {
	printf("Enter a number: ");
	int input;
	scanf("%d", &input);
	int count = 1;
	float number = input;
	while(number > 9) {
		count++;
		number /= 10;
	}

	printf("The number %d has %d digits\n", input, count);
	return 0;
}
