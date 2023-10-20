#include <stdio.h>

//(a) Write a complete description of the type of the function f, assuming that it's declared as follows:
int (*f(float (*)(long), char *))(double);

/*
f is a function whose arguments are
a pointer to a function with a long type argument that returns a float and
a character pointer
The function with a double type argument that returns an int
*/

//(b) Give an example showing how f would be called.

float one(long n)
{
	return (float)n;
}

int two(double n)
{
	return (int)n;
}

int (*f(float (*fp)(long l), char *s))(double d)
{
	printf("%s\n", s);
	printf("%f\n", fp(426));
	return two;
}

int main(void)
{
	char *s = "test";
	int result;

	result = (f(one, s))(3.141592);

	printf("result: %d\n", result);

	return 0;
}
