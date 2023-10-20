int fact(int n);

int fact(int n)
{
	int result = 1;

	while (n > 0) {
		result *= n;
		n--;
	}
	/* answer */
	for (int i = 2; i <= n; i++)
		result *= i;

	return result;
}
