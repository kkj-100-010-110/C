#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, max, min, max2, min2;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	max = n1 > n2 ? n1 : n2;
	min = n1 < n2 ? n1 : n2;
	max2 = n3 > n4 ? n3 : n4;
	min2 = n3 < n4 ? n3 : n4;

	if (max > max2 && min < min2)
		;
	else if (max > min2 && min > min2)
		min = min2;
	else if (max < max2 && min < min2)
		max = max2;
	else
	{
		max = max2;
		min = min2;
	}
	
	printf("Largest: %d\n", max);
	printf("Smallest: %d\n", min);
	
	return 0;
}
