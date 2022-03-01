#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int first_month, first_day, first_year, second_month, second_day, second_year;
	bool early = true;	

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &first_month, &first_day, &first_year);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &second_month, &second_day, &second_year);

	if (first_year < second_year)
		early = true;
	else if (first_year > second_year)
		early = false;
	else
	{
		if (first_month < second_month)
			early = true;
		else if (first_month > second_month)
			early = false;
		else
		{
			if (first_day < second_day)
				early = true;
			else
				early = false;
		}
	}

	if (early == true)
		printf("%d/%.2d/%.2d is earlier than %d/%.2d/%.2d\n",
				first_month, first_day, first_year, second_month, second_day, second_year);
	else
		printf("%d/%.2d/%.2d is earlier than %d/%.2d/%.2d\n",
				second_month, second_day, second_year, first_month, first_day, first_year);

	return 0;
}
