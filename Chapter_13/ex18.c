#include <stdio.h>

void remove_filename(char *url);

int main(void)
{
	char s[] = "http://www.knking.com/index.html";

	remove_filename(s);

	printf("%s\n", s);
}

void remove_filename(char *url)
{
	char *p = url;

	while (*p++)
		;
	p -= 2;
	while (*p) {
		if (*p == '/') {
			*p = '\0';
			break;
		}
		p--;
	}
}
