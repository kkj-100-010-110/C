#include <stdio.h>
#include <stdlib.h>

struct a {
	int b;
};

int main()
{
	struct a x = {1};

	printf("%d\n", x.b);
	x.b = 5;
	printf("%d\n", x.b);
	(&x)->b = 6;
	printf("%d\n", (&x)->b);
	// x is not a pointer variable
	// (&x) is an address of the x, which means it can be stored to pointer variables
	// so a right arrow operator works
	// struct a *x = &x; (*x).b = 6; x->b = 6; same as (&x)->b = 6;
	
	return 0;
}
