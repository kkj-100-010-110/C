#include <stdio.h>

struct complex {
	double real, imaginary;
};

struct complex make_complex(double real, double imaginary);
struct complex add_complex(struct complex c1, struct complex c2);

int main()
{
	struct complex c1, c2, c3;

	return 0;
}

struct complex make_complex(double real, double imaginary)
{
	struct complex c;

	c.real = real;
	c.imaginary = imaginary;

	return c;
}

struct complex add_complex(struct complex c1, struct complex c2)
{
	struct complex result;

	result.real = c1.real + c2.real;
	result.imaginary = c1.imaginary + c2.imaginary;

	return result;
}
