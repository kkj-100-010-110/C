#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

void generate_random_walk(char walk[10][10])
{
	int direction, i, j;
	char ch;

	for (i = 0; i < SIZE; i++)
		for (j = 0; j < SIZE; j++)
			walk[i][j] = '.';

	srand((unsigned) time(NULL));

/* start from (0, 0) */
	i = 0;
	j = 0;
	ch = 'A';
	walk[i][j] = ch; // 'A' on the start point
	ch++;
	while (ch <= 'Z') { // 'B' to 'Z'
		if ((walk[i + 1][j] != '.' && walk[i - 1][j] != '.') && (walk[i][j + 1] != '.' && walk[i][j - 1] != '.'))
			break;
		direction = rand() % 4;
		if (direction == 0) {
			i += 1;
			if (i >= SIZE) {
				i = SIZE - 1;
				continue;
			}
			if (walk[i][j] != '.')
				i--;
			else {
				walk[i][j] = ch;
				ch++;
			}
		}
		else if (direction == 1) {
			i -= 1;
			if (i < 0) {
				i = 0;
				continue;
			}
			if (walk[i][j] != '.')
				i++;
			else {
				walk[i][j] = ch;
				ch++;
			}
		}
		else if (direction == 2) {
			j -= 1;
			if (j < 0) {
				j = 0;
				continue;
			}
			if (walk[i][j] != '.')
				j++;
			else {
				walk[i][j] = ch;
				ch++;
			}
		}
		else {
			j += 1;
			if (j >= SIZE) {
				j = SIZE - 1;
				continue;
			}
			if (walk[i][j] != '.')
				j--;
			else {
				walk[i][j] = ch;
				ch++;
			}
		}
	}

}

void print_array(char walk[10][10])
{
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			printf("%c ", walk[i][j]);
		printf("\n");
	}
}

int main(void)
{
	char arr[SIZE][SIZE];

	generate_random_walk(arr);

	print_array(arr);
	return 0;
}
