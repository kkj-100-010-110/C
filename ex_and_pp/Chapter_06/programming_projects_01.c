#include <stdio.h>

int main(void)
{
	float number, max = 0;

	do {
		printf("Enter a number: ");
		scanf("%f", &number);
		if (number > max)
			max = number;
	} while (number > 0);

	if (max == 0) {
		printf("You put number less than 1\n");
		return 0;
	}
	printf("The largest number entered was %.2f\n", max);

	return 0;
}
