#include <stdio.h>

int main(void)
{
	const char *first_digit[] = { "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety" };
	const char *second_digit[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	const char *exception[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	int digit, first_num, second_num;

	printf("Enter a two-digit number: ");
	scanf("%d", &digit);

	if (digit < 10 || digit > 99)
	{
		printf("You entered a wrong number.\n");
		return 0;
	}

	first_num = digit / 10;
	second_num = digit % 10;

	printf("You entered the number ");

	if (first_num == 1)
		printf("%s.\n", exception[second_num]);
	else {
		if (second_num == 0)
			printf("%s.\n", first_digit[first_num - 2]);
		else
			printf("%s-%s.\n", first_digit[first_num - 2], second_digit[second_num - 1]);
	}

	return 0;
}
