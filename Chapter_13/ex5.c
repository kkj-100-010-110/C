#include <stdio.h>
#include <ctype.h>

void capitalize(char str[]);

int main(void)
{
	char s[100] = "I am a boy.";

	capitalize(s);

	printf("%s\n", s);

	return 0;
}

//void capitalize(char str[])
//{
//	int i;
//
//	for (i = 0; str[i] != '\0'; i++)
//		str[i] = toupper(str[i]);
//}

void capitalize(char str[])
{
	char *p;

	for (p = str; *p != '\0'; p++)
		*p = toupper(*p);
}
