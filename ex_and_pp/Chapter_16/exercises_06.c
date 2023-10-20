#include <stdio.h>

struct time {
	int hours, minutes, seconds;
};

struct time split_time(long total_seconds);

int main()
{
	struct time t;
	long total_sec;

	//total_sec = 43200;
	total_sec = 4205;

	t = split_time(total_sec);

	printf("hours: %d\nminutes: %d\nseconds: %d\n", t.hours, t.minutes, t.seconds);

	return 0;
}

struct time split_time(long total_seconds)
{
	struct time t;

	t.seconds = total_seconds % 60;
	t.minutes = total_seconds / 60 % 60;
	t.hours = total_seconds / 60 / 60;

	return t;
}
