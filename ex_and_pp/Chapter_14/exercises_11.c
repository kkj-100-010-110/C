#include <stdio.h>

#define ERROR(s,index) (fprintf(stderr, (s), (index)))

int main(void)
{
	int index = 0;

	fprintf(stderr, "Range error: index = %d\n", index);
	ERROR("Range error: index = %d\n", index);

	return 0;
}
