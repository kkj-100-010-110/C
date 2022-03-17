#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define ALPA 26

bool are_anagrams(const char *word1, const char *word2);
void count_alpa(char *word);

int main(void)
{
	char word1[ALPA] = { 0 }, word2[ALPA] = { 0 };

	printf("Enter first word: ");
	count_alpa(word1);

	printf("Enter second word: ");
	count_alpa(word2);

	if (are_anagrams(word1, word2))
		printf("The words are anagram.\n");
	else
		printf("The words are not anagram.\n");

	return 0;
}

void count_alpa(char *word)
{
	char ch;

	while ((ch = tolower(getchar())) != '\n') {
		if (ch >= 97 && ch <= 122)
			word[ch - 97]++;
	}
}

bool are_anagrams(const char *word1, const char *word2)
{
	int i;

	for (i = 0; *word1++ == *word2++; i++)
		;
	return i < ALPA ? 0 : 1;
}
