#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define N 100

//void read_line(char str[], int n);
int compute_vowel_count(const char *sentence);

int main(void)
{
	char sentence[N];

	printf("Enter a sentence: ");
	gets(sentence);
	//read_line(sentence, N);
	printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));

	return 0;
}

//void read_line(char str[], int n)
//{
//	char ch;
//	int i = 0;
//
//	while ((ch = getchar()) != '\n')
//		if (i < n)
//			str[i++] = ch;
//	str[i] = '\0';
//}

int compute_vowel_count(const char *sentence)
{
	int number_vowels = 0;

	for (int i = 0; i <= strlen(sentence); i++) {
		switch (toupper(sentence[i])) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
				number_vowels++;
				break;
		}
	}
	return number_vowels;
}
