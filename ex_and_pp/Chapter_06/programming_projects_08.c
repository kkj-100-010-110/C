#include <stdio.h>

int main(void)
{
	int days, start, n, last;

	printf("enter number of days in month: ");
	scanf("%d", &days);
	printf("enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start);

	n = start + days;
	last = 8;
	for (int i = 1; i < n; i++) {
		if (i < start)
		{
			printf("   ");
			continue;
		}
		if (i == last)
		{
			printf("\n");
			last += 7;
		}
		printf("%2d ", i - start + 1);
	}
	printf("\n");

	return 0;
}
//
//#include <stdio.h>
//
//int main(void)
//{
//  int i, n, start_day;
//
//  printf("Enter number of days in month: ");
//  scanf("%d", &n);
//  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
//  scanf("%d", &start_day);
//
//  /* print any leading "blank dates" */
//  for (i = 1; i < start_day; i++)
//    printf("   ");
//
//  /* now print the calendar */
//  for (i = 1; i <= n; i++) {
//    printf("%3d", i);
//    if ((start_day + i - 1) % 7 == 0)
//      printf("\n");
//  }
//
//  return 0;
//}
