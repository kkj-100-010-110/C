#include <stdio.h>

//(1)
#define CHECK(x,y,n) (((x) >= 0 && (x) <= n - 1) && ((y) >= 0 && (y) <= n - 1) ? 1 : 0)

//(2)
#define MEDIAN(x,y,z) ((x) > (y) ? ((x) < (z) ? x : ((y) > (z) ? y : z)) : ((y) < (z) ? y : ((x) > (z) ? x : z)))

//(3)
#define POLYNOMIAL(x) ((((3 * (x) + 2) * (x) - 5) * (x) - 1) * (x) + 7) * (x) - 6

int main(void)
{
	printf ("%d\n", CHECK(0, 25, 26));
	printf ("%d\n", CHECK(-1, 26, 25));
	printf ("\n");

	printf ("%d\n", MEDIAN(1, 2, 3));
	printf ("%d\n", MEDIAN(6, 5, 4));
	printf ("%d\n", MEDIAN(8, 9, 7));
	printf ("%d\n", MEDIAN(25, 7, 87));
	printf ("\n");

	printf ("%d\n", POLYNOMIAL(1));
	printf ("%d\n", POLYNOMIAL(5));
}
