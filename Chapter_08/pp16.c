#include <stdio.h>
#include <ctype.h>

#define ALPA 26

int main(void)
{
	char letter[ALPA] = { 0 };
	char ch;
	int i;

	printf("Enter first word: ");
	while ((ch = tolower(getchar())) != '\n') {
		if (ch >= 97 && ch <= 122)
			letter[ch - 97]++;
	}

	printf("Enter second word: ");
	while ((ch = tolower(getchar())) != '\n') {
		if (ch >= 97 && ch <= 122)
			letter[ch - 97]--;
	}

	for (i = 0; i < ALPA; i++) {
		if (letter[i] != 0)
			break;
	}

	if (i == ALPA)
		printf("The words are anagram.\n");
	else
		printf("The words are not anagram.\n");

	return 0;
}
