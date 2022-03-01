#include <stdio.h>

#define NUMBER 15

int main(void)
{
	char phone_number[NUMBER];

	printf("Enter phone number: ");
	for (int i = 0; i < NUMBER; i++)
		scanf("%c", &phone_number[i]);

	printf("In numeric form: ");
	for (int i = 0; i < NUMBER; i++) {
		if (phone_number[i] >= 65 && phone_number[i] <= 90) {
			switch (phone_number[i]) {
				case 'A': case 'B': case 'C':
					printf("2");
					break;
				case 'D': case 'E': case 'F':
					printf("3");
					break;
				case 'G': case 'H': case 'I':
					printf("4");
					break;
				case 'J': case 'K': case 'L':
					printf("5");
					break;
				case 'M': case 'N': case 'O':
					printf("6");
					break;
				case 'P': case 'R': case 'S':
					printf("7");
					break;
				case 'T': case 'U': case 'V':
					printf("8");
					break;
				case 'W': case 'X': case 'Y':
					printf("9");
					break;
			}
		}
		else {
			printf("%c", phone_number[i]);
		}
	}
	printf("\n");

	return 0;
}
