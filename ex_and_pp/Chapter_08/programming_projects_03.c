/* C98 */
//#define true 1
//#define false 0
//typedef int bool;
#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false};
	int digit;
	long n;

	while (1) {
		printf("Enter a number: ");
		scanf("%ld", &n);

		if (n <= 0)
			break;
		while (n > 0) {
			digit = n % 10;
			if (digit_seen[digit])
				break;
			digit_seen[digit] = true;
			n /= 10;
		}

		if (n > 0)
			printf("Repeated digit\n");
		else
			printf("No repeated digit\n");

		for (int i = 0; i < 10; i++)
			digit_seen[i] = false;
	}

	return 0;
}
