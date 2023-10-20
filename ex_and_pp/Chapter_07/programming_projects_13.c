#include <stdio.h>

int main(void)
{
	float average = 0.0f, word = 0.0f;
	char ch;

	printf("Enter a sentence: ");

	while ((ch = getchar()) != '\n') {
		if (ch == ' ')
			word++;
		else
			average++;
	}
	word++;

	printf("Average word length: %.1f\n", average / word);

	return 0;
}
