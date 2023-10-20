#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50
#define SIZE 20

int read_line(char str[], int n);
void error_on_failure(void);

int main()
{
	int i, j;
	char **words = malloc(sizeof(char *) * (MAX + 1));
	if (words == NULL)
		error_on_failure();
	char *temp = malloc(sizeof(char) * (SIZE + 1));
	if (temp == NULL)
		error_on_failure();

	for (i = 0; i < MAX; i++) {
		words[i] = malloc(sizeof(char) * (SIZE + 1));
		if (words[i] == NULL)
			error_on_failure();
		printf("Enter word: ");
		if (read_line(words[i], SIZE) == 0)
			break;
	}

	for (i = 1; i < MAX && *words[i] != '\0'; i++) {
		strcpy(temp, words[i]);
		for (j = i - 1; j >= 0 && strcmp(words[j], temp) > 0; j--)
			strcpy(words[j + 1], words[j]);
		strcpy(words[j + 1], temp);
	}
	free(temp);

	printf("In sorted order: ");
	for (i = 0; i < MAX && *words[i] != '\0'; i++) {
		printf("%s ", words[i]);
	}
	printf("\n");

	for (i = 0; i < MAX && *words[i] != '\0'; i++) {
		free(words[i]);
	}
	free(words);

	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

void error_on_failure(void)
{
	printf("Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
