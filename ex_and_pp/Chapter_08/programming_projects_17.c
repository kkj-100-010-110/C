#include <stdio.h>

#define SIZE 99

int main(void)
{
	//int size; // VLA
	int i, j, n, size;
	int square[SIZE][SIZE] = {0};

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &size);
	
	//int square[size][size] = {0}; // VLA

	i = 0;
	j = size / 2;
	for (n = 1; n <= (n * n); n++) {
		if (n == 1)
			square[i][j] = 1;
		else if (i < 0 && j >= size) {
			if (square[size - 1][0] == 0) {
				i = size - 1;
				j = 0;
				square[i][j] = n;
			}
			else if (square[i + 2][j - 1] == 0) {
				i += 2;
				j--;
				square[i][j] = n;
			}
			else
				break;
		}
		else if (i < 0) {
			if (square[size - 1][j] == 0) {
				i = size - 1;
				square[i][j] = n;
			}
			else if (square[i + 2][j - 1] == 0) {
				i += 2;
				j--;
				square[i][j] = n;
			}
			else
				break;
		}
		else if (j == size) {
			if (square[i][0] == 0) {
				j = 0;
				square[i][j] = n;
			}
			else if (square[i + 2][j - 1] == 0) {
				i += 2;
				j--;
				square[i][j] = n;
			}
			else
				break;
		}
		else {
			if (square[i][j] == 0)
				square[i][j] = n;
			else if (square[i + 2][j - 1] == 0) {
				i += 2;
				j--;
				square[i][j] = n;
			}
			else
				break;
		}
		i--;
		j++;
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			printf("%d\t", square[i][j]);
		printf("\n");
	}

	return 0;

}
