#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main(void)
{
	char sentence[SIZE];
	char ch, end;
	int i = 0;

	printf("Enter a sentence: ");

/* scanf() */
//	for (int a = 0; a < SIZE; a++) {
//		scanf("%c", &sentence[a]);
//		if ((sentence[a] == '?' || sentence[a] == '.') || sentence[a] == '!') {
//			i = a;
//			break;
//		}
//	}
//	end = sentence[i];

/* getchar() */
	while ((ch = getchar()) != '\n') {
		if (ch == '?' || ch == '.' || ch == '!') {
			end = ch;
			break;
		}
		sentence[i] = ch;
		i++;
	}

	printf("Reversal of sentence:");
	for (int j = i; j >= 0; j--) { // to search ' '
		if (sentence[j] == ' ' || j == 0) {
			if (j == 0)
				printf(" ");
			for (int p = j; p < i; p++) // to print from ' ' to the end of each word.
				printf("%c", sentence[p]);
			i = j;
		}
	}
	printf("%c\n", end);

	return 0;
}
