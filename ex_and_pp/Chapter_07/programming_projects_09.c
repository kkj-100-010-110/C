#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int hour = 0, minute = 0, ap = 1;
	char check_ap;

	printf("Enter a 12-hour time: ");

	while ((check_ap = getchar()) != ':') {
		if (check_ap == ' ')
			;
		if (check_ap >= 48 && check_ap <= 57) {
			hour *= 10;
			hour += check_ap - 48;
		}
	}
	while ((check_ap = getchar()) != '\n') {
		if (check_ap == ' ')
			;
		if (check_ap >= 48 && check_ap <= 57) {
			minute *= 10;
			minute += check_ap - 48;
		}
		if (toupper(check_ap) == 'P')
			ap = 12;
	}

	if (hour == 12 && ap == 12)
		;
	else if (hour == 12 && ap == 1)
		hour = hour - 12;
	else if (ap == 12)
		hour = hour + 12;

	printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, minute);
}
