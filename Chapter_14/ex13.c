#include <stdio.h>

#define N 100

void f(void);

int main(void)
{
	f();
#ifdef N
#undef N
#endif
	return 0;
}

void f(void)
{
#if defined(N)
	printf("N is %d\n", N);
#else
	printf("N is undefined\n");
#endif
}
// after preprocessing
/*
# 2 "ex12.c" 2




# 5 "ex12.c"
void f(void);

int main(void)
{
 f();



 return 0;
}

void f(void)
{



 printf("N is undefined\n");

}
*/
