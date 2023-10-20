#include <stdio.h>
#include <string.h>

int main(void)
{
	char *month_names[] = { "January", "February", "March", "April", "May", "June",
							"July", "August", "September", "October", "November", "December" };
	int month, day, year;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("You entered the date %s %d, %d\n", month_names[month - 1], day, year);

	return 0;
}
