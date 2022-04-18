//(a)
#include <stdio.h>

#define GENERIC_MAX(type)		\
type type##_max(type x, type y)	\
{								\
	return x > y ? x : y;		\
}

/********************************
long long_max(type x, type y)
{
	return x > y ? x : y;
}
********************************/

int main(void)
{
	long i = 1, j = 2;

	GENERIC_MAX(long);

	printf("%ld\n", long_max(i, j));
	
	return 0;
}

//(b)
// unsigned long cannot make function name properly.
/*****************************************************************
unsigned long unsigned long_max(unsigned long x, unsigned long y)
{
	return x > y ? x : y;
}
*****************************************************************/
//(c)
// typedef unsigned long ULONG;
// GENERIC_MAX(ULONG);
