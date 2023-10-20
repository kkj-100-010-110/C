#include <stdio.h>
#include <string.h>

#define N 50

void build_index_url(const char *domain, char *index_url);

int main(void)
{
	char result[N];

	build_index_url("knking.com", result);

	printf("%s\n", result);

	return 0;
}

void build_index_url(const char *domain, char *index_url)
{
	strcpy(index_url, "http://www.");
	strcat(index_url, domain);
	strcat(index_url, "/index.html");
}
