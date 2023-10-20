/*
(a) Every variable with static storage duration has file scope. FALSE
(b) Every variable declared inside a function has no linkage.	FALSE
(c) Every variable with internal linkage has static storage duration. TRUE
(d) Every parameter has block scope. TRUE
*/

void example(int a, register int b)
{
	static int c; //(a) it is block scope.
	extern int d; //(b) it has an external or internal linkage depending on function return types
}
