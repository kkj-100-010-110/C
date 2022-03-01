#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define ALPA 26

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts[26]);

void read_word(int counts[26])
{
	char ch;

	while ((ch = tolower(getchar())) != '\n') {
		if (ch >= 97 && ch <= 122)
			counts[ch - 97]++;
	}
}

bool equal_array(int counts1[26], int counts2[26])
{
	for (int i = 0; i < ALPA; i++) {
		if (counts1[i] != counts2[i])
			return false;
	}
	return true;
}

int main(void)
{
	int word1[ALPA] = { 0 };
	int word2[ALPA] = { 0 };
	char ch;
	int i;

	printf("Enter first word: ");
	read_word(word1);

	printf("Enter second word: ");
	read_word(word2);

	equal_array(word1, word2) == true ? printf("The words are anagram.\n") : printf("The words are not anagram.\n");

	return 0;
}
