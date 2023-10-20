double inner_poroduct(double a[], double b[], int n);

double inner_poroduct(double a[], double b[], int n)
{
	int i;
	double result = 0.0;

	for (i = 0; i < n; i++)
		result += a[i] * b[i];

	return result;
}
