/* Which of the following declarations are legal? (Assume that PI is a macro that represents 3.141592.) */

/*a*/
char c = 65;
/*b*/
static int i = 5, j = i * i;
/*c*/
double d = 2 * PI;
/*d*/
double angles[] = { 0, PI / 2, PI, 3 * PI / 2};

-> a, c and d
//b is illegal the initializer for a variable with static storage duration must be a constant expression, and i * i doesn't qualify.
