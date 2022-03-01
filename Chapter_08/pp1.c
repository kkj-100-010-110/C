/* C98 */
//#define true 1
//#define false 0
//typedef int bool;
#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false}, check = false;
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	printf("Repeated digit(s):");
	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]) {
			printf(" %d", digit);
			check = true;
		}
		digit_seen[digit] = true;
		n /= 10;
	}
	if (check != true)
		printf(" 0");
	printf("\n");

	return 0;
}
