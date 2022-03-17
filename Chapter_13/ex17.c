#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension);
bool test_extension2(const char *file_name, const char *extension);

int main(void)
{
	printf("%d\n", test_extension("memo.txt", "TXT"));
	printf("%d\n", test_extension("memo.c", "TXT"));
	printf("%d\n", test_extension("memo.c", "C"));
	printf("%d\n", test_extension("memo.exe", "EXE"));
	printf("%d\n", test_extension("memo.exe", "O"));

//	printf("%d\n", test_extension("memo.txt", "txt"));
//	printf("%d\n", test_extension("memo.c", "txt"));
//	printf("%d\n", test_extension("memo.c", "c"));
}

bool test_extension(const char *file_name, const char *extension)
{
	while (*file_name) {
		if (*file_name++ == '.') {
			while (*file_name != '\0' && toupper(*file_name++) == *extension++)
				;
			break;
		}
	}
	return (*file_name == '\0' && *extension == '\0') ? true : false;
}

bool test_extension2(const char *file_name, const char *extension)
{
	for (const char *p = file_name; *p; p++)
		if (*p++ == '.') 
			return (strcmp(p, extension) == 0) ? true : false;
}
