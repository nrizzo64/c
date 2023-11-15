#include <stdio.h>

int main(void) {
	printf("Enter a number between 0 and 32767: ");
	int input;
	scanf("%d", &input);
	printf("In octal, your number is: %05o\n", input);

	return 0;
}
