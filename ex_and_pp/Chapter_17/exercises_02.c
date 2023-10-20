#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *duplicate(char *str);

int main()
{
	char *str = "is it work?";
	char *test = duplicate(str);

	printf("%s\n", test);

	return 0;
}

char *duplicate(char *str)
{
	char *new = malloc(sizeof(char) * (strlen(str) + 1));
	if (new == NULL) {
		printf("error: malloc failed in duplicate\n");
		return NULL;
	}
	//memcpy(new, str, strlen(str) + 1);
	strcpy(new, str);

	return new;
}
