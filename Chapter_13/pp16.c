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

void read_line(char *str, int n);
void reverse(char *message);

int main(void)
{
	char message[N];

	printf("Enter a message: ");
	read_line(message, N);
	reverse(message);

	printf("Reversal is: %s\n", message);

	return 0;
}

void read_line(char *str, int n)
{
	int i = 0, ch;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
}

void reverse(char *message)
{
	char *p, *q, temp;

	for (q = message; *q != '\0'; q++)
		;
	
	for (p = message, --q; p <= q; p++) {
		temp = *p;
		*p = *q;
		*q = temp;
		q--;
	}
}
