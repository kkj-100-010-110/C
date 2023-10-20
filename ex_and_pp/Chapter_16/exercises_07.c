#include <stdio.h>

struct fraction {
	int numerator, denominator;
};

struct fraction a(struct fraction f); // make f lowest terms
struct fraction b(struct fraction f1, struct fraction f2); // add f1 and f2
struct fraction c(struct fraction f1, struct fraction f2); // subtract f2 from f1
struct fraction d(struct fraction f1, struct fraction f2); // multiply f1 and f2
struct fraction e(struct fraction f1, struct fraction f2); // divide f1 by f2

int main()
{
	struct fraction f = { 247, 962 }, f1 = { 1, 2 }, f2 = { 1, 3 }, result;

	result = a(f);
	printf("%d / %d\n\n", result.numerator, result.denominator);

	result = b(f1, f2);
	printf("%d / %d\n\n", result.numerator, result.denominator);

	result = c(f1, f2);
	printf("%d / %d\n\n", result.numerator, result.denominator);

	result = d(f1, f2);
	printf("%d / %d\n\n", result.numerator, result.denominator);

	result = e(f1, f2);
	printf("%d / %d\n\n", result.numerator, result.denominator);

	return 0;
}

struct fraction a(struct fraction f) // make f lowest terms
{
	struct fraction result;
	int a, b, remainder;

	if (f.numerator > f.denominator)
	{
		a = f.numerator;
		b = f.denominator;
	}
	else
	{
		b = f.numerator;
		a = f.denominator;
	}

	do {
		remainder = a % b;
		a = b;
		b = remainder;
	} while (remainder != 0);

	result.numerator = f.numerator / a;
	result.denominator = f.denominator / a;

	return result;
}

struct fraction b(struct fraction f1, struct fraction f2) // add f1 and f2
{
	struct fraction result;

	result.denominator = f1.denominator * f2.denominator;
	result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;

	return a(result);
}

struct fraction c(struct fraction f1, struct fraction f2) // subtract f2 from f1
{
	struct fraction result;

	result.denominator = f1.denominator * f2.denominator;
	result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;

	return a(result);
}

struct fraction d(struct fraction f1, struct fraction f2) // multiply f1 and f2
{
	struct fraction result;

	result.denominator = f1.denominator * f2.denominator;
	result.numerator = f1.numerator * f2.numerator;

	return a(result);
}

struct fraction e(struct fraction f1, struct fraction f2) // divide f1 by f2
{
	struct fraction result;

	result.denominator = f1.denominator * f2.numerator;
	result.numerator = f1.numerator * f2.denominator;

	return a(result);
}
