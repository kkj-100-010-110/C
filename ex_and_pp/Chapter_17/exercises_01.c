#include <stdlib.h>
#include <stdio.h>

void *my_malloc(size_t n);

int main()
{
	int *test1;
	char *test2;
	double *test3;

	test1 = my_malloc(sizeof(int) * 10);
	test2 = my_malloc(sizeof(char) * 11);
	test3 = my_malloc(sizeof(double) * 10);

	for (int i = 0; i < 10; i++)
		test1[i] = i;

	for (int i = 0; i < 10; i++)
		test2[i] = i + 'a';
	test2[10] = '\0';

	for (int i = 0; i < 10; i++)
		test3[i] = i + 0.5;

	for (int i = 0; i < 10; i++)
		printf("test1: %d, test2: %c, test3: %f\n", test1[i], test2[i], test3[i]);

	free(test1);
	free(test2);
	free(test3);

	return 0;
}

void *my_malloc(size_t n)
{
	void *result = malloc(n);
	if (result == NULL) {
		printf("Error: malloc failed in my_malloc\n");
		exit(EXIT_FAILURE);
	}
	return result;
}
