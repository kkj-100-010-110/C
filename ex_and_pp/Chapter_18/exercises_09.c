/* Write a complete description of the type of x as specified by each of the following declarations. */

(a) char (*x[10])(int);
typedef char Fcn(int);
typedef Fcn *Fcn_ptr;
typedef *Fcn_ptr Fcn_ptr_array[10];
Fcn_ptr_array x;
// x is an array of ten pointers to functions. Each function takes an int argument and returns a character.
(b) int (*x(int))[5];
typedef int Arr[5];
typedef Arr Fnc(int);
Fcn *x;
// x is a function that returns a pointer to an array of five integers.
(c) float *(*x(void))(int);
typedef float *Fcn(int);
typedef Fcn *Fcn_nested(void);
Fcn_nested x;
// x is a function with no arguments that returns a pointer to a function with an int argument that returns a pointer to a float value.
(d) void (*x(int, void (*y)(int)))(int);
typedef void Fcn(int);
typedef void *Arg_fcn(int);
typedef Fcn *Fcn_nested(int, Arg_fcn);
Fcn x;
// x is a function with two arguments. The first argument is an integer, and the second is a pointer to a function with an int argument and no return value. x returns a pointer to a function with an int argument and no return value. (Although this example may seem artificially complex, the signal function—part of the standard C library—has exactly this prototype. See p. 632 for a discussion of signal.)
