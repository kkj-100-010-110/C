#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int month, day, year, early_m = 12, early_d = 31, early_y = 99;
	bool early = true;

	restart:
	while (1) {	
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &month, &day, &year);

		if (year == 0 && month == 0 && day == 0)
			break;

		if (year < early_y)
			early = true;
		else if (year > early_y)
			early = false;
		else
		{
			if (month < early_m) 
				early = true;
			else if (month > early_m)
				early = false;
			else
			{
				if (day < early_d)
					early = true;
				else
					early = false;
			}
		}

		if (early == true)
		{
			early_m = month;
			early_d = day;
			early_y = year;
		}
	}

	if (early_y == 99) {
		printf("Please put a valid date.\n");
		goto restart;
	}

	printf("%d/%.2d/%.2d is the earlist date\n", early_m, early_d, early_y);

	return 0;
}
