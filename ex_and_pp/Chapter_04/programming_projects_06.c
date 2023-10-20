#include <stdio.h>

int main(void)
{
	int even1, even2, even3, even4, even5, even6,
		odd1, odd2, odd3, odd4, odd5, odd6,
		first_sum, second_sum, total;

	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &odd1, &even1, &odd2, &even2, &odd3, &even3, &odd4, &even4, &odd5, &even5, &odd6, &even6);

	first_sum = even1 + even2 + even3 + even4 + even5 + even6;
	second_sum = odd1 + odd2 + odd3 + odd4 + odd5 + odd6;
	total = 3 * first_sum + second_sum;
	total--;

	printf("Check digit: %d\n", 9 - total % 10);

	return 0;
}
