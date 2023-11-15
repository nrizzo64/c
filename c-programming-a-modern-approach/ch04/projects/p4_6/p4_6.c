#include <stdio.h>

int main(void) {
	printf("Enter the first 12 digits of an EAN: ");
	int e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12;
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &e1, &e2, &e3, &e4, &e5, &e6, &e7, &e8, &e9, &e10, &e11, &e12);
	int first_sum = e2 + e4 + e6 + e8 + e10 + e12;
	int second_sum = e1 + e3 + e5 + e7 + e9 + e11;
	int check_digit = 9 - ((first_sum * 3 + second_sum - 1) % 10);
	printf("Check digit: %d\n", check_digit);

	return 0;
}
