#include <stdio.h>
#include <ctype.h>

int main(void)
{
	const int scrabble[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	char ch;
	int value = 0;

	printf("Enter a word: ");

	while ((ch = getchar()) != '\n') {
		value += scrabble[toupper(ch) - 65];
		
		//switch (toupper(ch)) {
		//	case 'A': case 'E': case 'I': case 'L': case 'N':
		//	case 'O': case 'R': case 'S': case 'T': case 'U':
		//		value += 1;
		//		break;
		//	case 'D': case 'G':
		//		value += 2;
		//		break;
		//	case 'B': case 'C': case 'M': case 'P':
		//		value += 3;
		//		break;
		//	case 'F': case 'H': case 'V': case 'W': case 'Y':
		//		value += 4;
		//		break;
		//	case 'K':
		//		value += 5;
		//		break;
		//	case 'J': case 'X':
		//		value += 8;
		//		break;
		//	case 'Q': case 'Z':
		//		value += 10;
		//		break;
		//}
	}
	printf("Scrabble value: %d\n", value);

	return 0;
}
