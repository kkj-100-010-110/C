#include <stdio.h>

int *find_largest(int a[], int n);

int main(void)
{
	int a[10];

	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);

	printf("%d\n", *find_largest(a, 10));

}

int *find_largest(int a[], int n)
{
	int max = a[0];
	int idx;

	for (int i = 1; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
			idx = i;
		}
	}

	return &a[idx];
}
