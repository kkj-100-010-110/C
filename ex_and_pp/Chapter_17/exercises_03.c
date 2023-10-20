#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value);

int main()
{
	int *arr = create_array(10, 7);

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}

int *create_array(int n, int initial_value)
{
	int *new = malloc(sizeof(int) * n);
	if (new == NULL) {
		printf("Error: malloc failed in create_array\n");
		return NULL;
	}

	for (int i = 0; i < n; i++)
		new[i] = initial_value;

	return new;
}
