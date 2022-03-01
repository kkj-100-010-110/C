#include <stdio.h>

int main(void)
{
	int n;
	float e = 2.0f; // e = 1 + 1/1!;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (float i = 1, j = 2; j <= n; j++) {
		i *= j;
		e += 1 / i;
	}

	printf("%f\n", e);

	return 0;
}
