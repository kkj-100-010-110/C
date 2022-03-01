#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_DIGITS 10

const int segments[MAX_DIGITS][7] = {{1, 1, 1, 1, 1, 1, 0},
									 {0, 1, 1},
									 {1, 1, 0, 1, 1, 0, 1},
									 {1, 1, 1, 1, 0, 0, 1},
									 {0, 1, 1, 0, 0, 1, 1},
									 {1, 0, 1, 1, 0, 1, 1},
									 {1, 0, 1, 1, 1, 1, 1},
									 {1, 1, 1},
									 {1, 1, 1, 1, 1, 1, 1},
									 {1, 1, 1, 1, 0, 1, 1}};

char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
	char ch;
	int i, position = 0;

	clear_digits_array();

	printf("Enter a number: ");
	while ((ch = getchar()) != '\n' && i < MAX_DIGITS) {
		if (ch >= 48 && ch <= 57) {
			process_digit(ch - 48, position); 
			position += 4;
			i++;
		}
	}
	print_digits_array();

	return 0;
}

void clear_digits_array(void)
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < MAX_DIGITS * 4; j++)
			digits[i][j] = ' ';
}

void process_digit(int digit, int position)
{
	if (segments[digit][0] == 1) {
		digits[1][position + 1] = '_';
	}
	if (segments[digit][1] == 1) {
		digits[2][position + 2] = '|';
	}
	if (segments[digit][2] == 1) {
		digits[3][position + 2] = '|';
	}
	if (segments[digit][3] == 1) {
		digits[3][position + 1] = '_';
	}
	if (segments[digit][4] == 1) {
		digits[3][position] = '|';
	}
	if (segments[digit][5] == 1) {
		digits[2][position] = '|';
	}
	if (segments[digit][6] == 1) {
		digits[2][position + 1] = '_';
	}
}

void print_digits_array(void)
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < MAX_DIGITS * 4; j++)
			printf("%c", digits[i][j]);
		printf("\n");
	}
	printf("\n");
}
