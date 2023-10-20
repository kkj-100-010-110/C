#include <stdio.h>

#define LAST_NAME 20

int main(void)
{
	char last[LAST_NAME];
	char ch, first;
	int i;

	printf("Enter a first and last name: ");

	ch = getchar();
	first = ch;
	while ((ch = getchar()) != ' ');

	i = 0;
	while ((ch = getchar()) != '\n') {
		last[i] = ch;
		i++;
	}

	for (int j = 0; j < i; j++)
		printf("%c", last[j]);

	printf(", %c.\n", first);

	return 0;
}
