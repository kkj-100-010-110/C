#include <stdio.h>

#define N 10

void selection_sort(int a[], int n);

void selection_sort(int a[], int n)
{
	int start = n - 1;
	int max = a[n - 1];
	int index = 0;

	for (int i = n - 2; i >= 0 ; i--) {
		if (a[i] >= max) {
			max = a[i];
			index = i;
		}
	}
	a[index] = a[start];
	a[start] = max;

	if (n - 2 == 0)
		return ;
	else
		selection_sort(a, n - 1);
}

int main(void)
{
	int a[N];

	printf("Enter %d numbers to be sorted: ", N);
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);

	selection_sort(a, N);

	printf("In sorted order: ");
	for (int i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}
