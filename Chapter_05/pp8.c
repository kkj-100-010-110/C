#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int hour, minute, convert, compare1, compare2, close, arrival, ap;
	char check_ap;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	convert = hour * 60 + minute;

	if (convert > 480 && convert < 583) // 8:00-9:43
	{
		compare1 = 480 - convert;
		compare2 = 583 - convert;
		if (compare1 < 0)
			-compare1;
		if (compare2 < 0)
			-compare2;
		close = compare1 < compare2 ? 480 : 583;
		if (close == 480)
			arrival = 616; // 10:16am
		else
			arrival = 712; // 11:52am
	}
	else if (convert > 583 && convert < 679) // 9:43-11:19
	{
		compare1 = 583 - convert;
		compare2 = 679 - convert;
		if (compare1 < 0)
			-compare1;
		if (compare2 < 0)
			-compare2;
		close = compare1 < compare2 ? 583 : 679;
		if (close == 583)
			arrival = 712; // 11:52am
		else
			arrival = 811; // 1:31pm
	}
	else if (convert > 679 && convert < 767) // 11:19-12:47
	{
		compare1 = 679 - convert;
		compare2 = 767 - convert;
		if (compare1 < 0)
			-compare1;
		if (compare2 < 0)
			-compare2;
		close = compare1 < compare2 ? 679 : 767;
		if (close == 679)
			arrival = 811; // 1:31pm
		else
			arrival = 900; // 3:00pm
	}
	else if (convert > 767 && convert < 840) // 12:47-14:00
	{
		compare1 = 767 - convert;
		compare2 = 840 - convert;
		if (compare1 < 0)
			-compare1;
		if (compare2 < 0)
			-compare2;
		close = compare1 < compare2 ? 767 : 840;
		if (close == 767)
			arrival = 900; // 3:00pm
		else
			arrival = 968; // 4:08pm
	}
	else if (convert > 840 && convert < 945) // 14:00-15:45
	{
		compare1 = 840 - convert;
		compare2 = 945 - convert;
		if (compare1 < 0)
			-compare1;
		if (compare2 < 0)
			-compare2;
		close = compare1 < compare2 ? 840 : 945;
		if (close == 840)
			arrival = 968; // 4:08pm
		else
			arrival = 1075; // 5:55pm
	}
	else if (convert > 945 && convert < 1140) // 15:45-19:00
	{
		compare1 = 945 - convert;
		compare2 = 1140 - convert;
		if (compare1 < 0)
			-compare1;
		if (compare2 < 0)
			-compare2;
		close = compare1 < compare2 ? 945 : 1140;
		if (close == 945)
			arrival = 1075; // 5:55pm
		else
			arrival = 1280; // 9:20pm
	}
	else if (convert > 1140 && convert < 1305) // 19:00-21:45
	{
		compare1 = 1140 - convert;
		compare2 = 1305 - convert;
		if (compare1 < 0)
			-compare1;
		if (compare2 < 0)
			-compare2;
		close = compare1 < compare2 ? 1140 : 1305;
		if (close == 1140)
			arrival = 1280; // 9:20pm
		else
			arrival = 1438; // 11:58pm
	}
	else if (convert < 480 || convert > 1305)
	{
		compare1 = 480 - convert;
		compare2 = 1305 - convert;
		if (compare1 < 0)
			-compare1;
		if (compare2 < 0)
			-compare2;
		close = compare1 < compare2 ? 480 : 1305;
		if (close == 480)
			arrival = 616;
		else
			arrival = 1438;
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
