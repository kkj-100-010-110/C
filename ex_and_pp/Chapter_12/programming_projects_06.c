/* Sorts an array of integers using Quicksort algorithms */

#include <stdio.h>

#define N 10

void quicksort(int *low, int *high);
int *split(int *low, int *high);

int main(void)
{
	int a[N], *p, *q;

	printf("Enter %d numbers to be sorted: ", N);
	for (p = a; p < a + N; p++)
		scanf("%d", p);

	p = a;
	q = a + (N - 1);
	quicksort(p, q);

	printf("In sorted order: ");
	for (p = a; p < a + N; p++)
		printf("%d ", *p);
	printf("\n");

	return 0;
}

void quicksort(int *low, int *high)
{
	int *middle;

	if (low >= high) return;
	middle = split(low, high);
	quicksort(low, middle - 1);
	quicksort(middle + 1, high);
}

int *split(int *low, int *high)
{
	int part_element = *low;

	for (;;) {
		while (low < high && part_element <= *high)
			high--;
		if (low >= high) break;
		*low = *high;
		low++;

		while (low < high && *low <= part_element)
			low++;
		if (low >= high) break;
		*high = *low;
		high--;
	}

	*high = part_element;
	return high;
}
