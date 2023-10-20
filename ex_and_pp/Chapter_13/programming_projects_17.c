#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 50

int read_line(char *str, int n);
bool is_palindrome(const char *message);

int main(void)
{
	char str[N];

	printf("Enter a message: ");
	read_line(str, N);
	if (is_palindrome(str))
		printf("Palindrome\n");
	else
		printf("Not a palindrome\n");

	return 0;
}

int read_line(char *str, int n)
{
	int i = 0, ch;

	while ((ch = getchar()) != '\n')
		if (i < n && (tolower(ch) >= 97 && tolower(ch) <= 122))
			str[i++] = tolower(ch);
	str[i] = '\0';

	return i;
}

bool is_palindrome(const char *message)
{
	const char *p, *q;

	for (q = message; *q != '\0'; q++)
		;
	for (q--, p = message; p <= q; p++)
		if (*p != *q--)
			return 0;

	return 1;
}
