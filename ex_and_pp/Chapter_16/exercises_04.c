#include <stdio.h>

typedef struct {
	double real, imaginary;
} Complex;

Complex make_complex(double real, double imaginary);
Complex add_complex(Complex c1, Complex c2);

int main()
{
	Complex c1, c2, c3;

	return 0;
}

Complex make_complex(double real, double imaginary)
{
	Complex c;

	c.real = real;
	c.imaginary = imaginary;

	return c;
}

Complex add_complex(Complex c1, Complex c2)
{
	Complex result;

	result.real = c1.real + c2.real;
	result.imaginary = c1.imaginary + c2.imaginary;

	return result;
}
