#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 30

void reverse_name(char *name);

int main(void)
{
	char name[N];

	printf("Enter a first and last name: ");
	gets(name);

	reverse_name(name);

	return 0;
}

void reverse_name(char *name)
{
	char *p = name, ch;
	while (isspace(*p++))
		;
	ch = *(p - 1);
	while (!isspace(*p++))
		;
	while (isspace(*p++))
		;
	for (p--; *p != '\0'; p++)
		printf("%c", *p);
	printf(", %c.\n", ch);
}
