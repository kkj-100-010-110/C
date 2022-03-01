#include <stdio.h>

int main(void)
{
	int num, result, remainder;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	remainder = num / 8;
	result = num % 8;
	result += (remainder % 8) * 10;
	remainder /= 8;
	result += (remainder % 8) * 100;
	remainder /= 8;
	result += (remainder % 8) * 1000;
	remainder /= 8;
	result += (remainder % 8) * 10000;
	printf("In octal, your number is: %.5d\n", result);

	return 0;
}
