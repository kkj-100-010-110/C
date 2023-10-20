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
	for (n = 1; n <= (size * size); n++) {
		if (i < 0 && j == size) {
			i = size - 1;
			j = 0;
		}
		else if (i < 0)
			i = size - 1;
		else if (j == size)
			j = 0;

		if (square[i][j] != 0) {
			if (i == size - 1 && j == 0) {
				i = 1;
				j = size - 1;
				if (square[i][j] == 0)
					square[i][j] = n;
			}
			else if (square[i + 2][j - 1] == 0) {
				i += 2;
				j--;
				square[i][j] = n;
			}
		}
		else {
			square[i][j] = n;
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
