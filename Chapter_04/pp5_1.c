/* Computes a universal product code check digit */

#include <stdio.h>

int main(void)
{
	int d, first_sum, second_sum, total;

	printf("Enter the first 11 digits of a UPC: ");
	scanf("%d", &d);
	
	first_sum = d / 10000000000
		+ d % 1000000000 / 100000000
		+ d % 10000000 / 1000000
		+ d % 100000 / 10000
		+ d % 1000 / 100 
		+ d % 10;
	second_sum = d % 10000000000 / 1000000000
		+ d % 100000000 / 10000000 
		+ d % 1000000 / 100000
		+ d % 10000 / 1000
		+ d % 100 / 10;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total -1) % 10));

	return 0;
}
