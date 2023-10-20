#include <stdio.h>

#define TAX_RATE 0.05

int main(void)
{
	float amount_dollar_cent;
	float tax;

	printf("Enter an amount: ");
	scanf("%f", &amount_dollar_cent);

	tax = amount_dollar_cent * TAX_RATE;
	printf("With tax added: $%.2f\n", amount_dollar_cent + tax);
}
