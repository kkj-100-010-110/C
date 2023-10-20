#include <stdio.h>
#include <ctype.h>

struct time { int departure, arrival; };
const struct time table[] =
{ { 480, 616 },
  { 583, 712 },
  { 679, 811 },
  { 767, 900 },
  { 840, 968 },
  { 940, 1075 },
  { 940, 1075 },
  { 1140, 1280 },
  { 1305, 1438 } };

int main(void)
{
	struct time my_time = {0};
	int hour, minute, compare1, compare2, close = 0;

	for (;;) {
		printf("Enter a 24-hour time(hh:mm), or 24:24 to quit: ");
		scanf("%d:%d", &hour, &minute);

		if (hour == 24 && minute == 24)
			break;

		my_time.departure = hour * 60 + minute;

		if (my_time.departure > 480 && my_time.departure < 583) // 8:00-9:43
		{
			compare1 = 480 - my_time.departure;
			compare2 = 583 - my_time.departure;
			if (compare1 < 0)
				compare1 = -compare1;
			if (compare2 < 0)
				compare2 = -compare2;
			close = compare1 < compare2 ? 480 : 583;
			if (close == 480)
				my_time.arrival = 616; // 10:16am
			else
				my_time.arrival = 712; // 11:52am
		}
		else if (my_time.departure > 583 && my_time.departure < 679) // 9:43-11:19
		{
			compare1 = 583 - my_time.departure;
			compare2 = 679 - my_time.departure;
			if (compare1 < 0)
				compare1 = -compare1;
			if (compare2 < 0)
				compare2 = -compare2;
			close = compare1 < compare2 ? 583 : 679;
			if (close == 583)
				my_time.arrival = 712; // 11:52am
			else
				my_time.arrival = 811; // 1:31pm
		}
		else if (my_time.departure > 679 && my_time.departure < 767) // 11:19-12:47
		{
			compare1 = 679 - my_time.departure;
			compare2 = 767 - my_time.departure;
			if (compare1 < 0)
				compare1 = -compare1;
			if (compare2 < 0)
				compare2 = -compare2;
			close = compare1 < compare2 ? 679 : 767;
			if (close == 679)
				my_time.arrival = 811; // 1:31pm
			else
				my_time.arrival = 900; // 3:00pm
		}
		else if (my_time.departure > 767 && my_time.departure < 840) // 12:47-14:00
		{
			compare1 = 767 - my_time.departure;
			compare2 = 840 - my_time.departure;
			if (compare1 < 0)
				compare1 = -compare1;
			if (compare2 < 0)
				compare2 = -compare2;
			close = compare1 < compare2 ? 767 : 840;
			if (close == 767)
				my_time.arrival = 900; // 3:00pm
			else
				my_time.arrival = 968; // 4:08pm
		}
		else if (my_time.departure > 840 && my_time.departure < 945) // 14:00-15:45
		{
			compare1 = 840 - my_time.departure;
			compare2 = 945 - my_time.departure;
			if (compare1 < 0)
				compare1 = -compare1;
			if (compare2 < 0)
				compare2 = -compare2;
			close = compare1 < compare2 ? 840 : 945;
			if (close == 840)
				my_time.arrival = 968; // 4:08pm
			else
				my_time.arrival = 1075; // 5:55pm
		}
		else if (my_time.departure > 945 && my_time.departure < 1140) // 15:45-19:00
		{
			compare1 = 945 - my_time.departure;
			compare2 = 1140 - my_time.departure;
			if (compare1 < 0)
				compare1 = -compare1;
			if (compare2 < 0)
				compare2 = -compare2;
			close = compare1 < compare2 ? 945 : 1140;
			if (close == 945)
				my_time.arrival = 1075; // 5:55pm
			else
				my_time.arrival = 1280; // 9:20pm
		}
		else if (my_time.departure > 1140 && my_time.departure < 1305) // 19:00-21:45
		{
			compare1 = 1140 - my_time.departure;
			compare2 = 1305 - my_time.departure;
			if (compare1 < 0)
				compare1 = -compare1;
			if (compare2 < 0)
				compare2 = -compare2;
			close = compare1 < compare2 ? 1140 : 1305;
			if (close == 1140)
				my_time.arrival = 1280; // 9:20pm
			else
				my_time.arrival = 1438; // 11:58pm
		}
		else if (my_time.departure < 480 || my_time.departure > 1305)
		{
			compare1 = 480 - my_time.departure;
			compare2 = 1305 - my_time.departure;
			if (compare1 < 0)
				compare1 = -compare1;
			if (compare2 < 0)
				compare2 = -compare2;
			close = compare1 < compare2 ? 480 : 1305;
			if (close == 480)
				my_time.arrival = 616;
			else
				my_time.arrival = 1438;
		}

		if (close / 60 == 12)
			printf("Closest departure time is %.2d:%.2d p.m,",
					close / 60, close % 60);
		else if (close < 60)
			printf("Closest departure time is %.2d:%.2d a.m,",
					close / 60, close % 60);
		else if (close < 720)
			printf("Closest departure time is %.2d:%.2d a.m,",
					close / 60, close % 60);
		else
			printf("Closest departure time is %.2d:%.2d p.m,",
					close / 60 - 12, close % 60);


		if (my_time.arrival / 60 == 12)
			printf(" arriving at %.2d:%.2d p.m\n", 
					my_time.arrival / 60, my_time.arrival % 60);
		else if (my_time.arrival < 60)
			printf(" arriving at %.2d:%.2d a.m\n", 
					my_time.arrival / 60, my_time.arrival % 60);
		else if (my_time.arrival < 720)
			printf(" arriving at %.2d:%.2d a.m\n", 
					my_time.arrival / 60, my_time.arrival % 60);
		else
			printf(" arriving at %.2d:%.2d p.m\n", 
					my_time.arrival / 60 - 12, my_time.arrival % 60);
	}

	return 0;
}
