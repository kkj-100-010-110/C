#include <stdio.h>

#define N 50

//int main(void)
//{
//	char ch, str[N];
//	int i;
//	char *p;
//
//	printf("Enter a message: ");
//	for (i = 0; (ch = getchar()) != '\n'; i++) {
//		str[i] = ch;
//	}
//	printf("Reversal is: ");
//	for (i -= 1; i >= 0; i--)
//		printf("%c", str[i]);
//	printf("\n");
//
//	return 0;
//}

int main(void)
{
	char ch, str[N];
	int i;
	char *p;

	printf("Enter a message: ");
	for (p = str; p < str + N ; p++) {
		*p = getchar();
		if (*p == '\n')
			break;
	}
	printf("Reversal is: ");
	for (p -= 1; p >= str; p--)
		printf("%c", *p);
	printf("\n");

	return 0;
}
