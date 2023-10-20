#include <stdio.h>
#include <stdbool.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int a(struct rectangle r); // area of rectangle
struct point b(struct rectangle r); // center of rectangle
struct rectangle c(struct rectangle r, int x, int y); // move rectangle by units
bool d(struct rectangle r, struct point p); // point is in the rectangle

int main()
{
	struct rectangle test1 = { { 2, 3 }, { 6, 1} };
	struct rectangle test2;
	struct point cen_1 = b(test1);
	struct point cen_2;

	printf("upper left x, y: %d, %d\n", test1.upper_left.x, test1.upper_left.y);
	printf("lower right x, y: %d, %d\n", test1.lower_right.x, test1.lower_right.y);
	printf("center point: %d, %d\n", cen_1.x, cen_1.y);
	printf("Area: %d\n", a(test1));
	
	printf("--------------------------------------------------\n");
	test2 = c(test1, 4, 3);
	cen_2 = b(test2);

	printf("upper left x, y: %d, %d\n", test2.upper_left.x, test2.upper_left.y);
	printf("lower right x, y: %d, %d\n", test2.lower_right.x, test2.lower_right.y);
	printf("Area: %d\n", a(test2));
	printf("center point: %d, %d\n", cen_2.x, cen_2.y);

	return 0;
}

int a(struct rectangle r) // area of rectangle
{
	int breadth, length;

	breadth = r.lower_right.x - r.upper_left.x;
	length = r.upper_left.y - r.lower_right.y;

	return length * breadth;
}

struct point b(struct rectangle r) // center of rectangle
{
	struct point p;

	p.x = (r.upper_left.x + r.lower_right.x) / 2;
	p.y = (r.upper_left.y + r.lower_right.y) / 2;

	return p;
}

struct rectangle c(struct rectangle r, int x, int y) // move rectangle by units
{
	struct rectangle result;

	result.upper_left.x = r.upper_left.x + x;
	result.lower_right.x = r.lower_right.x + x;
	result.upper_left.y = r.upper_left.y + y;
	result.lower_right.y = r.lower_right.y + y;

	return result;
}

bool d(struct rectangle r, struct point p) // point is in the rectangle
{
	if (p.x > r.lower_right.x || p.x < r.upper_left.x)
		return false;
	if (p.y < r.lower_right.y || p.y > r.upper_left.y)
		return false;
	return true;	
}
