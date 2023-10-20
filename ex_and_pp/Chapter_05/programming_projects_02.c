#include <stdio.h>

int main(void)
{
	int hour, minute;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	printf("Equivalent 12-hour time: ");
	switch (hour) {
		case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23:
			printf("%.2d:%.2d PM\n", hour - 12, minute);
			break;
		case 12:
			printf("%.2d:%.2d PM\n", hour, minute);
			break;
		case 0:
			printf("%.2d:%.2d AM\n", hour, minute);
			break;
		default :
			printf("%.2d:%.2d AM\n", hour, minute);
			break;
	}

	return 0;
}
