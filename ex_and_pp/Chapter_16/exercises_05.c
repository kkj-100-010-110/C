#include <stdio.h>

struct date {
	int month, day, year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main()
{

	return 0;
}

int day_of_year(struct date d)
{
	switch (d.month) {
		case 1: return d.day;
		case 2: return 31 + d.day;
		case 3: return 60 + d.day;
		case 4: return 91 + d.day;
		case 5: return 121 + d.day;
		case 6: return 152 + d.day;
		case 7: return 182 + d.day;
		case 8: return 213 + d.day;
		case 9: return 244 + d.day;
		case 10: return 274 + d.day;
		case 11: return 305 + d.day;
		case 12: return 335 + d.day;
	}
	return -1;
}

int compare_dates(struct date d1, struct date d2)
{
	if (d1.year < d2.year)
		return -1;
	else if (d1.year > d2.year)
		return 1;
	else
	{
		if (day_of_year(d1) < day_of_year(d2))
			return -1;
		else if (day_of_year(d1) > day_of_year(d2))
			return 1;
		else
			return 0;
	}
}
