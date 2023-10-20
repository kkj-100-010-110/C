#include <stdio.h>

#define PI 3.141592
#define RECTANGLE 1
#define CIRCLE 2

struct point { int x, y; };
struct shape {
	int shape_kind;
	struct point center;
	union {
		struct {
			int height, width;
		} rectangle;
		struct {
			int radius;
		} circle;
	} u;
} s;

int a(struct shape s); // area of shape
struct shape b(struct shape s, int x, int y); // move s by units
struct shape c(struct shape s, double c); // scale factor

int main()
{
	struct shape s1 = { RECTANGLE, { 4, 2 }, { 2, 4 } };
	struct shape s2 = { CIRCLE, { 0, 0 }, { 1 } };
	struct shape test1 = b(s1, 2, 4);
	test1 = c(test1, 2);
	struct shape test2 = c(s2, 4);

	printf("shape: %d, center: %d, %d, height&width: %d, %d\n",
			s1.shape_kind, s1.center.x, s1.center.y, s1.u.rectangle.height, s1.u.rectangle.width);
	printf("shape: %d, center: %d, %d, radius: %d\n",
			s2.shape_kind, s2.center.x, s2.center.y, s2.u.circle.radius);
	printf("area of s1: %d\n", a(s1));
	printf("area of s2: %d\n", a(s2));
	printf("\n");

	printf("shape: %d, center: %d, %d, height&width: %d, %d\n",
			test1.shape_kind, test1.center.x, test1.center.y, test1.u.rectangle.height, test1.u.rectangle.width);
	printf("shape: %d, center: %d, %d, radius: %d\n",
			test2.shape_kind, test2.center.x, test2.center.y, test2.u.circle.radius);
	printf("area of test1: %d\n", a(test1));
	printf("area of test2: %d\n", a(test2));

	return 0;
}

int a(struct shape s) // area of shape
{
	if (s.shape_kind == RECTANGLE)
		return s.u.rectangle.height * s.u.rectangle.width;
	else
		return PI * s.u.circle.radius * s.u.circle.radius;
}

struct shape b(struct shape s, int x, int y) // move s by units
{
	struct shape result = s;

	result.center.x += x; 
	result.center.y += y; 

	return result;
}

struct shape c(struct shape s, double c) // scale factor
{
	struct shape result = s;

	if (s.shape_kind == RECTANGLE)
	{
		result.u.rectangle.height *= c;
		result.u.rectangle.width *= c;
	}
	else
		result.u.circle.radius *= c;

	return result;
}
