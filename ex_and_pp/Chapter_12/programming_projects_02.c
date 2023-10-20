#include <stdio.h>
#include <ctype.h>

#define N 50

//int main(void)
//{
//	char ch, str[N];
//	int i = 0, j = 0;
//
//	printf("Enter a message: ");
//	while ((ch = getchar()) != '\n') {
//		if (tolower(ch) >= 97 && tolower(ch) <= 122) {
//			str[i] = tolower(ch);
//			i++;
//		}
//	}
//	for (i -= 1, j = 0; i >= j; i--) {
//		if (str[j] != str[i]) {
//			printf("Not a palindrome\n");
//			return 0;
//		}
//		j++;
//	}
//	printf("Palindrome\n");
//
//	return 0;
//}

int main(void)
{
	char ch, str[N];
	char *p, *q;

	printf("Enter a message: ");
	p = str;
	while ((ch = getchar()) != '\n') {
		if (tolower(ch) >= 97 && tolower(ch) <= 122) {
			*p = tolower(ch);
			p++;
		}
	}
	for (p -= 1, q = str; p >= q; p--) {
		if (*q != *p) {
			printf("Not a palindrome\n");
			return 0;
		}
		q++;
	}
	printf("Palindrome\n");

	return 0;
}
