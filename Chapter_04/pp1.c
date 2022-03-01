#include <stdio.h>

int main(void)
{
	int digit;

	printf("Enter a two-digit number: ");
	scanf("%d", &digit);

	printf("The reversal: %d\n", ((digit % 10) * 10) + digit / 10);

	return 0;
}
