#include <stdio.h>
#include <stdbool.h>

#define VALUE_CHECK(n) ( (n) > 255 ? 255 : ( (n) < 0 ) ? 0 : (n) )
#define BRIGHT_CHECK(n) ( ((n) > 0 && (n) < 3) ? 3 : (n) )
#define MAX_CHECK(n) ( (n) > 255 ? 255 : (n) )

struct color {
	int red;
	int green;
	int blue;
};

struct color make_color(int red, int green, int blue);
int getRed(struct color c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main()
{
	struct color test;
	struct color test1;
	struct color test2;

	test = make_color(256, -1, 255);

	printf("make_color red: %d, green: %d, blue: %d\n", test.red, test.green, test.blue);

	test1 = make_color(0, 0, 0);
	test2 = make_color(255, 255, 255);

	printf("equal_color work? %d\n", equal_color(test1, test2));

	test1 = brighter(test1);
	printf("brighter red: %d, green: %d, blue: %d\n", test1.red, test1.green, test1.blue);

	test2 = darker(test2);
	printf("darker red: %d, green: %d, blue: %d\n", test2.red, test2.green, test2.blue);

	return 0;
}

struct color make_color(int red, int green, int blue)
{
	struct color c;

	c.red = VALUE_CHECK(red);
	c.green = VALUE_CHECK(green);
	c.blue = VALUE_CHECK(blue);

	return c;
}

int getRed(struct color c)
{
	return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
	if (color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue)
		return true;
	else
		return false;
}

struct color brighter(struct color c)
{
	if (c.red == 0 && c.green == 0 && c.blue == 0)
	{
		struct color result = { 3, 3, 3 };
		return result;
	}
	struct color result;

	result.red = BRIGHT_CHECK(c.red) / 0.7;
	result.green = BRIGHT_CHECK(c.green) / 0.7;
	result.blue = BRIGHT_CHECK(c.blue) / 0.7;

	result.red = MAX_CHECK(result.red);
	result.green = MAX_CHECK(result.green);
	result.blue = MAX_CHECK(result.blue);

	return result;
}

struct color darker(struct color c)
{
	struct color result;

	result.red = c.red * 0.7;
	result.green = c.green * 0.7;
	result.blue = c.blue * 0.7;

	return result;
}
