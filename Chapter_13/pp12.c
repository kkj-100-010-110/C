#include <stdio.h>
#include <ctype.h>

#define WORD 30
#define CHAR 20

void read_word(char *sentence[], int n);

int main(void)
{
	int i, j = 0;
	char sentence[WORD][CHAR];
	char ch, end;

	printf("Enter a sentence: ");

	for (i = 0; i < WORD; i++) {
		while ((ch = getchar()) != '\n') {
			if (ch == '?' || ch == '.' || ch == '!') {
				end = ch;
				break;
			}
			else if (isspace(ch))
				break;
			sentence[i][j++] = ch;
		}
		sentence[i][j] = '\0';
		j = 0;
		if (end == '?' || end == '.' || end == '!')
			break;
	}
	printf("Reversal of sentence:");
	for (; i >= 0; i--)
		printf(" %s", sentence[i]);
	printf("%c\n", end);
}
