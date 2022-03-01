#include <stdio.h>

int main(void)
{
	int number, remainder, result = 0;

	printf("Enter a number: ");
	scanf("%d", &number);

	do {
		result *= 10;
		remainder = number % 10;
		number /= 10;
		result += remainder;
	} while (number > 0);

	printf("The reversal: %d\n", result); 

	return 0;
}
