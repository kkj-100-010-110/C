#include <stdio.h>

int main(void)
{
	long num, first_sum, second_sum, total;

	printf("Enter the first 12 digits of an EAN: ");
	scanf("%ld", &num);

	first_sum = num % 100000000000 / 10000000000
		+ num % 1000000000 / 100000000
		+ num % 10000000 / 1000000
		+ num % 100000 / 10000
		+ num % 1000 / 100
		+ num % 10;
	second_sum = num / 100000000000 
		+ num % 10000000000 / 1000000000 
		+ num % 100000000 / 10000000
		+ num % 1000000 / 100000
		+ num % 10000 / 1000
		+ num % 100 / 10;

	total = 3 * first_sum + second_sum;
	total--;
	printf("Check digit: %ld\n", 9 - total % 10);

	return 0;
}
