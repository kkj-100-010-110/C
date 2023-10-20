#include <stdio.h>

int gdc(int m, int n);

//int gdc(int m, int n)
//{
//	int remainder;
//
//	while (n != 0) {
//		remainder = m % n;
//		m = n;
//		n = remainder;
//	}
//	while (n != 0) {
//		m = n;
//		n = m % n;
//	{
//
//	return m;
//}

int gdc(int m, int n)
{
	int remainder;

	if (n == 0)
		return m;
	else
		gdc(n, m % n);
}

int main(void)
{
	printf("%d\n", gdc(128, 8));
}
