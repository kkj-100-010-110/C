#include <stdio.h>

int main(void)
{
	int digit;

	printf("Enter a three-digit number: ");
	scanf("%d", &digit);

	printf("The reversal: %d\n", ((digit % 10) * 100) + ((digit % 100) / 10 * 10) + (digit / 100));

	return 0;
}
