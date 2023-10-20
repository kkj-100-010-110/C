#include <stdio.h>

int *find_middle(int a[], int n);

int main(void)
{
	int a[5] = { 1, 2, 3, 4, 5 };

	printf("%d\n", *find_middle(a, 5));
}

int *find_middle(int a[], int n)
{
	int *p;

	p = a;
	return p + ((p + n - 1) - p) / 2;
}
