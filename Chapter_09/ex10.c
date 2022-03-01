
int max_num(int a[], int n)
{
	int max = 0; // max = a[0];

	for (int i = 0; i < n; i++) {
		if (max < a[i])
			max = a[i];
	}
	return max;
}

double average(int a[], int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += a[i];

	return sum / n;
}

int positive_numbers(int a[], int n)
{
	int n;

	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			n++;

	return n;
}
