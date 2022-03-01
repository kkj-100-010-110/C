#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
	int largest, second;
	int arr[10];

	printf("Enter 10 numbers: ");
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	find_two_largest(arr, 10, &largest, &second);

	printf("%d, %d\n", largest, second);

	return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	*largest = a[0];

	for (int i = 0; i < n; i++)
		if (*largest < a[i])
			*largest = a[i];

	*second_largest = 0;

	for (int i = 0; i < n; i++)
		if (*second_largest < a[i] && a[i] < *largest)
			*second_largest = a[i];
}
