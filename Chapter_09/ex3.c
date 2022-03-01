int gdc(m, n);

int gdc(int m, int n)
{
	int remainder;

	while (n != 0) {
		remainder = m % n;
		m = n;
		n = remainder;
	}

	return m;
}
