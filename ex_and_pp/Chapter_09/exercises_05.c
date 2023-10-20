int num_digit(n);

int num_digit(int n)
{
	int i = 0;

	while (n > 0) {
		n /= 10;
		i++;
	}

	return i;
}
