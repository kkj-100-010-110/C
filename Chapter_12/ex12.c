#include <stdio.h>

#define N 5

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
	const int a[N] = { 4, 5, 9, 12, 1};
	int max, min;

	find_two_largest(a, N, &max, &min);
	printf("%d\n%d\n", max, min);
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
	int *p;
	int max;

	*largest = 0;
	*second_largest = 0;
	for (p = a; p < a + n; p++)
		if (*largest < *p)
			*largest = *p;

	for (p = a; p < a + n; p++)
		if (*second_largest < *p && *p < *largest)
			*second_largest = *p;
}
