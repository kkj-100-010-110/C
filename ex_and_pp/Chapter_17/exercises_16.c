#include <stdio.h>

int sum(int (*f)(int), int start, int end);

int square(int n) { return n * n; }
int cube(int n) { return n * n * n; }

int main()
{
	printf("Square sum from 2 to 5 : %d\n", sum(square, 2, 5));
	printf("Cube sum from 2 to 5 : %d\n", sum(cube, 2, 5));

	return 0;
}

int sum(int (*f)(int), int start, int end)
{
	int result = 0;

	for (int i = start; i <= end; i++)
		result += (*f)(i);

	return result;
}
