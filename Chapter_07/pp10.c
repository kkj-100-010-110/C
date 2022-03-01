#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int number_vowels = 0;
	char ch;

	printf("Enter a sentence: ");

	while ((ch = getchar()) != '\n') {
		switch (toupper(ch)) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
				printf("%c", ch);
				number_vowels++;
				break;
			default :
				printf("%c", ch);
				break;
		}
	}
	printf("\n");
	printf("Your sentence contains %d vowels.\n", number_vowels);

	return 0;
}
