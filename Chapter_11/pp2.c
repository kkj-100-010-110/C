#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void find_closest_flight (int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
	int hour, minute, convert, departure, arrival;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	convert = hour * 60 + minute;

	find_closest_flight (convert, &departure, &arrival);

	if (departure / 60 == 12)
		printf("Closest departure time is %.2d:%.2d p.m,",
				departure / 60, departure % 60);
	else if (departure < 60)
		printf("Closest departure time is %.2d:%.2d a.m,",
				departure / 60, departure % 60);
	else if (departure < 720)
		printf("Closest departure time is %.2d:%.2d a.m,",
				departure / 60, departure % 60);
	else
		printf("Closest departure time is %.2d:%.2d p.m,",
				departure / 60 - 12, departure % 60);


	if (arrival / 60 == 12)
		printf(" arriving at %.2d:%.2d p.m\n", 
				arrival / 60, arrival % 60);
	else if (arrival < 60)
		printf(" arriving at %.2d:%.2d a.m\n", 
				arrival / 60, arrival % 60);
	else if (arrival < 720)
		printf(" arriving at %.2d:%.2d a.m\n", 
				arrival / 60, arrival % 60);
	else
		printf(" arriving at %.2d:%.2d p.m\n", 
				arrival / 60 - 12, arrival % 60);

	return 0;
}

void find_closest_flight (int desired_time, int *departure_time, int *arrival_time)
{
	int compare1, compare2;

	if (desired_time > 480 && desired_time < 583) // 8:00-9:43
	{
		compare1 = abs(480 - desired_time);
		compare2 = abs(583 - desired_time);
		*departure_time = compare1 < compare2 ? 480 : 583;
		if (*departure_time == 480)
			*arrival_time = 616; // 10:16am
		else
			*arrival_time = 712; // 11:52am
	}
	else if (desired_time > 583 && desired_time < 679) // 9:43-11:19
	{
		compare1 = abs(583 - desired_time);
		compare2 = abs(679 - desired_time);
		*departure_time = compare1 < compare2 ? 583 : 679;
		if (*departure_time == 583)
			*arrival_time = 712; // 11:52am
		else
			*arrival_time = 811; // 1:31pm
	}
	else if (desired_time > 679 && desired_time < 767) // 11:19-12:47
	{
		compare1 = abs(679 - desired_time);
		compare2 = abs(767 - desired_time);
		*departure_time = compare1 < compare2 ? 679 : 767;
		if (*departure_time == 679)
			*arrival_time = 811; // 1:31pm
		else
			*arrival_time = 900; // 3:00pm
	}
	else if (desired_time > 767 && desired_time < 840) // 12:47-14:00
	{
		compare1 = abs(767 - desired_time);
		compare2 = abs(840 - desired_time);
		*departure_time = compare1 < compare2 ? 767 : 840;
		if (*departure_time == 767)
			*arrival_time = 900; // 3:00pm
		else
			*arrival_time = 968; // 4:08pm
	}
	else if (desired_time > 840 && desired_time < 945) // 14:00-15:45
	{
		compare1 = abs(840 - desired_time);
		compare2 = abs(945 - desired_time);
		*departure_time = compare1 < compare2 ? 840 : 945;
		if (*departure_time == 840)
			*arrival_time = 968; // 4:08pm
		else
			*arrival_time = 1075; // 5:55pm
	}
	else if (desired_time > 945 && desired_time < 1140) // 15:45-19:00
	{
		compare1 = abs(945 - desired_time);
		compare2 = abs(1140 - desired_time);
		*departure_time = compare1 < compare2 ? 945 : 1140;
		if (*departure_time == 945)
			*arrival_time = 1075; // 5:55pm
		else
			*arrival_time = 1280; // 9:20pm
	}
	else if (desired_time > 1140 && desired_time < 1305) // 19:00-21:45
	{
		compare1 = abs(1140 - desired_time);
		compare2 = abs(1305 - desired_time);
		*departure_time = compare1 < compare2 ? 1140 : 1305;
		if (*departure_time == 1140)
			*arrival_time = 1280; // 9:20pm
		else
			*arrival_time = 1438; // 11:58pm
	}
	else if (desired_time < 480 || desired_time > 1305)
	{
		compare1 = abs(480 - desired_time);
		compare2 = abs(1305 - desired_time);
		*departure_time = compare1 < compare2 ? 480 : 1305;
		if (*departure_time == 480)
			*arrival_time = 616;
		else
			*arrival_time = 1438;
	}
}
