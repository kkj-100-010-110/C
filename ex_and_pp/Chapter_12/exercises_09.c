#include <stdio.h>

#define N 5

double inner_product(const double *a, const double *b, int n);

int main(void)
{
	const double a[N] = { 1, 2, 3, 4, 5 };
	const double b[N] = { 1, 2, 3, 4, 5 };

	printf("%lf\n", inner_product(a, b, N));

}

double inner_product(const double *a, const double *b, int n)
{
	double result = 0.0;
	const double *p, *q;
	
	p = a;
	q = b;
	while (p < a + n)
		result += *p++ * *q++;
	return result;
}
