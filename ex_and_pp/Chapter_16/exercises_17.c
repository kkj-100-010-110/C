#include <stdio.h>

int main()
{
	enum { FALSE, TRUE } b;
	int i;

	b = FALSE;
	b = i;
	b++;
	i = b;
	i = 2 * b + 1;

	return 0;
}
