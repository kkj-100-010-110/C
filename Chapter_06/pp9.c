#include <stdio.h>

int main(void)
{
	float loan, rate, payment;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	
	rate = rate / 100 / 12;
	
	while (loan > 0) {
		printf("Enter monthly payment: ");
		scanf("%f", &payment);

		printf("Balance remaining after first payment: $%.2f\n", loan + (loan * rate) - payment);
		loan = loan + (loan * rate) - payment;
	}

	return 0;
}
