#include <stdio.h>

int main(void)
{
	int m, n, remainder, numerator, denominator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	m = numerator;
	n = denominator;

	while (n != 0)
	{
		remainder = m % n;
		m = n;
		n = remainder;
	}
	numerator /= m;
	denominator /= m;

	printf("In lowest terms: %d/%d\n", numerator, denominator);

	return 0;
}
