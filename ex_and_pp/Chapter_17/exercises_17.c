#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int compare(const void *p, const void *q) { return *(int *)p - *(int *)q; }

int main()
{
	int a[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0 && i < 20)
			a[i] = i * 2;
		else if (i % 2 == 1 && i < 20)
			a[i] = i * 3;
		else if (i % 2 == 0 && i < 40)
			a[i] = i * 2 - 20;
		else if (i % 2 == 1 && i < 40)
			a[i] = i * 2 - 20;
		else if (i % 2 == 0 && i < 60)
			a[i] = i * 2 - 10;
		else if (i % 2 == 1 && i < 60)
			a[i] = i * 2 - 10;
		else if (i % 2 == 0 && i < 80)
			a[i] = i * 2 - 40;
		else if (i % 2 == 1 && i < 80)
			a[i] = i * 2 - 40;
		else if (i % 2 == 0)
			a[i] = i * 2 - 50;
		else
			a[i] = i * 2 - 50;
	}

	for (i = 0; i < SIZE - 50; i++)
		printf("%d ", a[i]);
	printf("\n");

	for (i = SIZE - 50; i < SIZE; i++)
		printf("%d ", a[i]);
	printf("\n\n");

	// exercises 17
	qsort(&a[50], SIZE - 50, sizeof(a[0]), compare);

	for (i = 0; i < SIZE - 50; i++)
		printf("%d ", a[i]);
	printf("\n");

	for (i = SIZE - 50; i < SIZE; i++)
		printf("%d ", a[i]);
	printf("\n\n");

	// all size
	qsort(a, SIZE, sizeof(int), compare);

	for (i = 0; i < SIZE - 50; i++)
		printf("%d ", a[i]);
	printf("\n");

	for (i = SIZE - 50; i < SIZE; i++)
		printf("%d ", a[i]);
	printf("\n\n");

	return 0;
}
