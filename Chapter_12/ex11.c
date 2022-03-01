#include <stdio.h>

#define N 5

int find_largest(int a[], int n);

int main(void)
{
	int a[N] = { 2, 5, 7, 9, 1 };

	printf("%d\n", find_largest(a, N));
}

int find_largest(int a[], int n)
{
	int *p, max;

	max = 0;
	for (p = a; p < a + n; p++)
		if (max < *p)
			max = *p;

	return max;
}
