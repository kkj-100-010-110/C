#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main(void)
{
	char sentence[SIZE];
	char ch, end;
	char *p, *q, *r;

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
	p = sentence;
	while ((ch = getchar()) != '\n') {
		if (ch == '?' || ch == '.' || ch == '!') {
			end = ch;
			break;
		}
		*p = ch;
		p++;
	}

	printf("Reversal of sentence:");
	for (q = p; q >= sentence; q--) { // to search ' '
		if (*q == ' ' || q == sentence) {
			if (q == sentence)
				printf(" ");
			for (char *r = q; r < p; r++) // to print from ' ' to the end of each word.
				printf("%c", *r);
			p = q;
		}
	}
	printf("%c\n", end);

	return 0;
}
