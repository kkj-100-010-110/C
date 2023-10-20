#include <stdio.h>

#define SIZE 5

int main(void)
{
	int arr[SIZE][SIZE];
	int row_total = 0, column_total = 0;

	for (int i = 0; i < SIZE; i++) {
		printf("Enter row %d: ", i + 1);
		for (int j = 0; j < SIZE; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	printf("Row totals:");
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			row_total += arr[i][j];
		}
		printf(" %d", row_total);
		row_total = 0;
	}
	printf("\nColumn totals:");
	for (int j = 0; j < SIZE; j++) {
		for (int i = 0; i <SIZE; i++) {
			column_total += arr[i][j];
		}
		printf(" %d", column_total);
		column_total = 0;
	}
	printf("\n");

	return 0;
}
