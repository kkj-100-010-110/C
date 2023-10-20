/* Horner's Rule */
#include <stdio.h>

int horner(int x);

int horner(int x)
{
	int answer;

	answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	return answer;
}

int main(void)
{
	int x;

	printf("Enter a value for x: ");
	scanf("%d", &x);

	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d\n", horner(x));

	return 0;
}
