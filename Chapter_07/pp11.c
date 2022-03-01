#include <stdio.h>

int main(void)
{
	char ch, first;

	printf("Enter a first and last name: ");

	ch = getchar();
	first = ch;
	while ((ch = getchar()) != ' ');
	while ((ch = getchar()) != '\n') {
		printf("%c", ch);
	}
	printf(", %c.\n", first);

	return 0;
}
