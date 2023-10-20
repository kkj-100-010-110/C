extern float a; // static storage duration, file scope, external linkage

void f(register double b) // automatic storage duration, block scope, none
{
	static int c; // static storage duration, block scope, none
	auto char d; // automatic storage duration, block scope, none
}
