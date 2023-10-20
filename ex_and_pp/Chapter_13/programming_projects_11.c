#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 100

double compute_average_word_length(const char *sentence);

int main(void)
{
	float average = 0.0f, word = 0.0f;
	char ch;
	char sentence[N];

	printf("Enter a sentence: ");
	gets(sentence);

	printf("Average word length: %.1f\n", compute_average_word_length(sentence));

	return 0;
}

double compute_average_word_length(const char *sentence)
{
	double word = 0.0, letter = 0.0;

	for (const char *p = sentence; *p != '\0'; p++) {
		if (isspace(*p))
			;
		else {
			if (isspace(*(p - 1)))
				word++;
			letter++;
		}
	}
	word++;

	return (letter / word);
}
