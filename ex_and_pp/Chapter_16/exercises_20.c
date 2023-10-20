#include <stdio.h>


int main()
{
	enum { NORTH, SOUTH, EAST, WEST } direction;
	direction = EAST;
	int x = 0, y = 0;

	switch (direction) {
		case EAST: x++; break;
		case WEST: x--; break;
		case SOUTH: y++; break;
		case NORTH: y--; break;
	}

}
