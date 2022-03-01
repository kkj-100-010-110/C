#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
	char arr[SIZE][SIZE];
	char ch;
	int i, j, direction;

	for (i = 0; i < SIZE; i++)
		for (j = 0; j < SIZE; j++)
			arr[i][j] = '.';

	srand((unsigned) time(NULL));

/* start from (0, 0) */
	i = 0;
	j = 0;
	ch = 'A';
	arr[i][j] = ch; // 'A' on the start point
	ch++;
	while (ch <= 'Z') {
		if ((arr[i + 1][j] != '.' && arr[i - 1][j] != '.') && (arr[i][j + 1] != '.' && arr[i][j - 1] != '.'))
			break;
		direction = rand() % 4;
		if (direction == 0) {
			i += 1;
			if (i >= SIZE) {
				i = SIZE - 1;
				continue;
			}
			if (arr[i][j] != '.')
				i--;
			else {
				arr[i][j] = ch;
				ch++;
			}
		}
		else if (direction == 1) {
			i -= 1;
			if (i < 0) {
				i = 0;
				continue;
			}
			if (arr[i][j] != '.')
				i++;
			else {
				arr[i][j] = ch;
				ch++;
			}
		}
		else if (direction == 2) {
			j -= 1;
			if (j < 0) {
				j = 0;
				continue;
			}
			if (arr[i][j] != '.')
				j++;
			else {
				arr[i][j] = ch;
				ch++;
			}
		}
		else {
			j += 1;
			if (j >= SIZE) {
				j = SIZE - 1;
				continue;
			}
			if (arr[i][j] != '.')
				j--;
			else {
				arr[i][j] = ch;
				ch++;
			}
		}
	}

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++)
			printf("%c ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
