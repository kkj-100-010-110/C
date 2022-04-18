#define N = 10
#define INC(x) x+1
#define SUB (x,y) x-y
#define SQR(x) ((x)*(x))
#define CUBE(x) (SQR(x)*(x))
#define M1(x,y) x##y
#define M2(x,y) #x #y

int main(void)
{
	int a[N], i, j, k, m;

#ifdef N
	i = j;
#else
	j = i;
#endif
	
	i = 10 * INC(j);
	i = SUB(j, k);
	i = SQR(SQR(j));
	i = CUBE(j);
	i = M1(j, k);
	puts(M2(i, j));

#undef SQR
	i = SQR(j);
#define SQR
	i = SQR(j);

	return 0;
}

// after preprocessing

# 1 "ex14.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "ex14.c"
# 9 "ex14.c"
int main(void)
{
 int a[= 10], i, j, k, m; // error : syntax error


 i = j;




 i = 10 * j+1;
 i = (x,y) x-y(j, k); // error : syntax error
 i = ((((j)*(j)))*(((j)*(j))));
 i = (((j)*(j))*(j));
 i = jk; // error : undefined variable
 puts("i" "j");


 i = SQR(j);

 i = (j);

 return 0;
}
