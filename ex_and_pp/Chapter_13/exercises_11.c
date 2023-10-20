#include <stdio.h>
#include <string.h>

int strcmp1(char *s, char *t);
int strcmp2(char *s, char *t);

int main(void)
{
	char str1[10] = "abcdfg";
	char str2[10] = "abcdfge";

	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", strcmp1(str1, str2));
	printf("%d\n", strcmp2(str1, str2));

}

int strcmp1(char *s, char *t)
{
	int i;

	for (i = 0; s[i] == t[i]; i++)
		if (s[i] == '\0')
			return 0;
	return s[i] - t[i];
}

int strcmp2(char *s, char *t)
{
	for (;*s == *t; t++)
		if (*s++ == '\0')
			return 0;

	return *s - *t;
}
