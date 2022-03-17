#include <stdio.h>
#include <string.h>

#define N 4
void get_extension(const char *file_name, char *extension);

int main(void)
{
	char extension[N];

	get_extension("asldkjferasdfklj.c", extension);

	printf("%s\n", extension);

	return 0;
}

void get_extension(const char *file_name, char *extension)
{
	for (const char *p = file_name; p <= file_name + strlen(file_name); p++) {
		if (*p++ == '.')
			strcpy(extension, p);
	}
}
