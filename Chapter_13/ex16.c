#include <stdio.h>

int count_spaces(const char s[])
{
	int count = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == ' ')
			count++;
	return count;
}

int count_spaces1(const char s[])
{
	int count = 0;

	for (; *s != '\0'; s++)
		if (*s == ' ')
			count++;
	return count;
}

int count_spaces2(const char s[])
{
	int count = 0;

	while (*s)
		if (*s == ' ')
			count++;
	return count;
}
