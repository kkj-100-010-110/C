#include <stdio.h>

int main(void)
{
	int n;
	float ee, e = 2.0f; // e = 1 + 1/1! // ee == E

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Enter an E: ");
	scanf("%f", &ee);

	for (float i = 1, j = 2; j <= n; j++) {
		i *= j;
		e += 1 / i;
		if (e >= ee)
			break;
	}

	printf("%f\n", e);

	return 0;
}
