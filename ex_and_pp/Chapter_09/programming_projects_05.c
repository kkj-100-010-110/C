#include <stdio.h>

void create_magic_square(int n, char magic_square[99][99]);
void print_magic_square(int n, char magic_square[99][99]);

void create_magic_square(int n, char magic_square[99][99])
{
	int row, column, number;
	
	row = 0;
	column = n / 2;
	for (number = 1; number <= (n * n); number++) {
		if (row < 0 && column == n) {
			row = n - 1;
			column = 0;
		}
		else if (row < 0)
			row = n - 1;
		else if (column == n)
			column = 0;

		if (magic_square[row][column] != 0) {
			if (row == n - 1 && column == 0) {
				row = 1;
				column = n - 1;
				if (magic_square[row][column] == 0)
					magic_square[row][column] = number;
			}
			else if (magic_square[row + 2][column - 1] == 0) {
				row += 2;
				column--;
				magic_square[row][column] = number;
			}
		}
		else {
			magic_square[row][column] = number;
		}
		row--;
		column++;
	}
}

void print_magic_square(int n, char magic_square[99][99])
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%d\t", magic_square[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int size;
	char square[99][99] = { 0 };

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &size);

//	create_magic_square(size, square[99][99]);
	create_magic_square(size, square);
//	print_magic_square(size, square[99][99]);
	print_magic_square(size, square);

	return 0;
}
