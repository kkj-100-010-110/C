#include <stdio.h>

#define N 10

int main(void)
{
	double ident[N][N] = { 0.0 };
	double *p;
	int i = 0;
	int num_zeros = N;

//	for (p = ident; p < ident + N; p += 11)
//		*p = 1.0;
	for (p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++)
		if (num_zeros == N) {
			*p = 1.0;
			num_zeros = 0;
		}
		else {
			*p = 0.0;
			num_zeros++;
		}

	for (p = ident; p < ident + N; p++) {
		if (i == 10) {
			printf("\n");
			i = 0;
		}
		printf("%.1lf ", *p);
		i++;
	}
	printf("\n");
}
