#include <stdio.h>
#include <stdlib.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
	long total;
	int hr, min, sec;
	printf("Enter seconds: ");

	scanf("%ld", &total); 

	split_time(total, &hr, &min, &sec);

	printf("%d, %d, %d\n", hr, min, sec);

	return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*hr = total_sec / 360;
	total_sec %= 360;
	*min = total_sec / 60;
	*sec = total_sec % 60;
}
