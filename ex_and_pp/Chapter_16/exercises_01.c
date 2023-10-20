#include <stdio.h>

int main()
{
	struct { int x, y; } x;
	struct { int x, y; } y;

	//it works like
	//struct {
	//	int x;
	//	int y;
	//} x
	
	x.x = 0;
	x.y = 1;
	y.x = 0;
	y.y = 1;

	printf("x: %d, %d, size: %lu\n", x.x, x.y, sizeof(x));
	printf("y: %d, %d, size: %lu\n", y.x, y.y, sizeof(y));

	return 0;
}
