#include <stdio.h>

float tax_due(int income);

float tax_due(int income)
{
	float tax;

	if (income < 750)
		tax = income * 0.01f;
	else if (income <= 2250)
		tax = 7.5f + 750 * 0.02f;
	else if (income <= 3750)
		tax = 37.5f + 2250 * 0.03f;
	else if (income <= 5250)
		tax = 82.5f + 3750 * 0.04f;
	else if (income <= 7000)
		tax = 142.5f + 5250 * 0.05f;
	else
		tax = 230.0f + 7000 * 0.06f;

	return tax;
}

int main(void)
{
	int income;

	printf("Enter the amount of taxable income: ");
	scanf("%d", &income);

	printf("The tax due: %.2f\n", tax_due(income));

	return 0;
}
