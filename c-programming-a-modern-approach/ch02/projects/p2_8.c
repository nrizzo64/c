#include <stdio.h>

int main(void) {
	float loanAmount, interestRate, monthlyPayment;
	printf("Enter amount of loan: ");
	scanf("%f", &loanAmount);

	printf("Enter interest rate: ");
	scanf("%f", &interestRate);

	printf("Enter monthly payment: ");
	scanf("%f", &monthlyPayment);

	interestRate = 1 + interestRate / 100 / 12;

	loanAmount = (loanAmount * interestRate) - monthlyPayment;
	printf("%.2f\n", loanAmount);

	loanAmount = (loanAmount * interestRate) - monthlyPayment;
	printf("%.2f\n", loanAmount);
	
	loanAmount = (loanAmount * interestRate) - monthlyPayment;
	printf("%.2f\n", loanAmount);
	return 0;
}
