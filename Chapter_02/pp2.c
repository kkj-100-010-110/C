#include <stdio.h>

int main()
{
	int radius = 10;
	float pi = 3.14f;
	float volume_of_sphere = 4.0f / 3.0f * pi * (radius * radius * radius);

	printf("The volume of a sphere with a %d-meter radius = %f\n", radius, volume_of_sphere);

	return 0;
}
