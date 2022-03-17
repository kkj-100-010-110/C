#include <stdio.h>
#include <string.h>

void censor(char *s);

int main(void)
{
	char str[100] = "food fool";

	censor(str);

	printf("%s\n", str);
}

void censor(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'o') {
			s[i] = s[i + 1] = s[i + 2] = 'x';
		}
	}
}
