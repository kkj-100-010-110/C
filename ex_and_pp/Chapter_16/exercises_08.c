#include <stdio.h>

struct color {
	int red;
	int green;
	int blue;
};

int main()
{
	const struct color MAGENTA = { .red = 255, .blue = 255 };

	return 0;
}
